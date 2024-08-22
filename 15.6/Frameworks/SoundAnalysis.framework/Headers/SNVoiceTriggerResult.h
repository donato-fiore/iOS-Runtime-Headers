// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNVOICETRIGGERRESULT_H
#define SNVOICETRIGGERRESULT_H

@class NSString;
@protocol SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding;

#import <Foundation/Foundation.h>


@interface SNVoiceTriggerResult : NSObject <SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif