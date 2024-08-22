// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCANALYTICSSIGNPOST_H
#define MPCANALYTICSSIGNPOST_H

@class MSVBlockGuard;

#import <Foundation/Foundation.h>


@interface MPCAnalyticsSignpost : NSObject

@property (retain, nonatomic) MSVBlockGuard *guard; // ivar: _guard
@property (nonatomic) NSUInteger identifier; // ivar: _identifier


+(void)beginWithIdentifier:(NSUInteger)arg0 ;
+(void)endWithIdentifier:(NSUInteger)arg0 error:(id)arg1 ;
+(void)endWithIdentifier:(NSUInteger)arg0 item:(id)arg1 machContinuousTime:(NSUInteger)arg2 ;
-(id)begin;
-(id)initWithIdentifier:(NSUInteger)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 timeout:(CGFloat)arg1 ;
-(void)end;
-(void)endWithError:(id)arg0 ;
-(void)endWithItem:(id)arg0 ;
-(void)endWithItem:(id)arg0 machContinuousTime:(NSUInteger)arg1 ;


@end


#endif