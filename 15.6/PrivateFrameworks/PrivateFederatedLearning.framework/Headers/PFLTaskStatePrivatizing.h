// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLTASKSTATEPRIVATIZING_H
#define PFLTASKSTATEPRIVATIZING_H

@class NSData, NSDictionary, NSNumber;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStatePrivatizing : NSObject <PFLTaskState>



@property (readonly, nonatomic) NSData *diff; // ivar: _diff
@property (readonly, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSNumber *numValidationSamples; // ivar: _numValidationSamples


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGradientDiff:(id)arg0 metrics:(id)arg1 numValidationSamples:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif