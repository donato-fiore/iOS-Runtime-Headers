// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOREPORTEDPROGRESS_H
#define GEOREPORTEDPROGRESS_H

@class geo_isolater, NSProgress, NSString;

#import <Foundation/Foundation.h>


@interface GEOReportedProgress : NSObject {
    geo_isolater *_isolater;
    NSProgress *_internalProgress;
    id *_cancellationHandler;
}


@property (copy) id *cancellationHandler;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property NSInteger completedUnitCount;
@property (copy) NSString *kind;
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property NSInteger totalUnitCount;


+(id)progressWithTotalUnitCount:(NSInteger)arg0 ;
-(id)initWithTotalUnitCount:(NSInteger)arg0 ;
-(void)addChild:(id)arg0 withPendingUnitCount:(NSInteger)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(NSInteger)arg0 ;
-(void)cancel;
-(void)resignCurrent;
-(void)setUserInfoObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif