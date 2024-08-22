// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKHIDPOINTEREVENTRECORD_H
#define BKHIDPOINTEREVENTRECORD_H

@class NSString, NSSet;
@protocol BSDescriptionProviding, BKHIDEventSenderInfo;

#import <Foundation/Foundation.h>


@interface BKHIDPointerEventRecord : NSObject <BSDescriptionProviding>

 {
    BOOL _didTrackPointerMovement;
    BOOL _didTrackButtonDown;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat destinationCaptureTime; // ivar: _destinationCaptureTime
@property (retain, nonatomic) NSSet *destinations; // ivar: _destinations
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BKHIDEventSenderInfo> *senderInfo; // ivar: _senderInfo
@property (readonly) Class superclass;
@property (nonatomic) BOOL trackingButtonDown; // ivar: _trackingButtonDown
@property (nonatomic) BOOL trackingPointerMovement; // ivar: _trackingPointerMovement


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif