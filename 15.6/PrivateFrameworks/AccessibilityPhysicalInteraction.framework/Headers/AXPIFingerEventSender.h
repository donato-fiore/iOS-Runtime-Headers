// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPIFINGEREVENTSENDER_H
#define AXPIFINGEREVENTSENDER_H


#import <Foundation/Foundation.h>


@interface AXPIFingerEventSender : NSObject

@property (nonatomic) NSUInteger senderID; // ivar: _senderID
@property (nonatomic) BOOL shouldAddRealEventFlag; // ivar: _shouldAddRealEventFlag


-(id)_assignFingerIdentifiersToTouches:(id)arg0 ;
-(void)_sendHandEvent:(unsigned int)arg0 touchesByFingerIdentifier:(id)arg1 ;
-(void)performCancel;
-(void)performDownWithTouches:(id)arg0 ;
-(void)performDownWithTouchesByFingerIdentifier:(id)arg0 ;
-(void)performMoveWithTouches:(id)arg0 ;
-(void)performMoveWithTouchesByFingerIdentifier:(id)arg0 ;
-(void)performUpWithTouches:(id)arg0 ;
-(void)performUpWithTouchesByFingerIdentifier:(id)arg0 ;


@end


#endif