// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLTASKSTATEUPLOADING_H
#define PFLTASKSTATEUPLOADING_H

@class NSDictionary, NSNumber, NSData;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStateUploading : NSObject <PFLTaskState>



@property (readonly, nonatomic) NSInteger diffCount; // ivar: _diffCount
@property (readonly, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSNumber *numValidationSamples; // ivar: _numValidationSamples
@property (readonly, nonatomic) NSData *privatizedDiff; // ivar: _privatizedDiff


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrivatizedDiff:(id)arg0 diffCount:(NSInteger)arg1 metrics:(id)arg2 numValidationSamples:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif