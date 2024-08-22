// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITOUCHFORCEOBSERVATIONMESSAGEREADER_H
#define _UITOUCHFORCEOBSERVATIONMESSAGEREADER_H

@class NSString;
@protocol _UITouchForceObservationMessageReading;

#import <Foundation/Foundation.h>


@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading>



@property (nonatomic) CGPoint centroid; // ivar: _centroid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldFilterDueToSystemGestures; // ivar: _shouldFilterDueToSystemGestures
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat touchForce; // ivar: _touchForce




@end


#endif