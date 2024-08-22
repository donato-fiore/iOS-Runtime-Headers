// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15PROXIMITYREADER19WEAKDELEGATEWRAPPER_H
#define _TTC15PROXIMITYREADER19WEAKDELEGATEWRAPPER_H

@class SwiftObject;
@protocol _TtP15ProximityReader30PaymentTerminalServiceDelegate_;



@interface _TtC15ProximityReader19WeakDelegateWrapper : SwiftObject <_TtP15ProximityReader30PaymentTerminalServiceDelegate_>

 {
    ? weakRef;
}




-(void)closed:(BOOL)arg0 ;
-(void)loading:(NSInteger)arg0 ;
-(void)readFeedback:(NSInteger)arg0 ;
-(void)sessionUpdated:(id)arg0 ;


@end


#endif