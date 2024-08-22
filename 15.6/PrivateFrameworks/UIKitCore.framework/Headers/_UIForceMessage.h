// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFORCEMESSAGE_H
#define _UIFORCEMESSAGE_H

@class NSString;
@protocol _UIForceObservationMessageConstructing;

#import <Foundation/Foundation.h>


@interface _UIForceMessage : NSObject <_UIForceObservationMessageConstructing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isReset) BOOL reset; // ivar: _reset
@property (nonatomic) NSUInteger stage; // ivar: stage
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: timestamp
@property (nonatomic) CGFloat touchForce; // ivar: touchForce


+(id)observe:(id)arg0 ;
+(id)reset;


@end


#endif