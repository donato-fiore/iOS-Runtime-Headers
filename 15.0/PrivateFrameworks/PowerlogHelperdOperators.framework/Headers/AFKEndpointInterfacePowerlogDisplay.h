// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFKENDPOINTINTERFACEPOWERLOGDISPLAY_H
#define AFKENDPOINTINTERFACEPOWERLOGDISPLAY_H

@class AFKEndpointInterface, PLIOKitOperatorComposition;



@interface AFKEndpointInterfacePowerlogDisplay : AFKEndpointInterface {
    unsigned int _notification;
}


@property (weak) PLIOKitOperatorComposition *comp; // ivar: _comp
@property BOOL valid; // ivar: _valid


-(id)initWithService:(unsigned int)arg0 andIOKitComposition:(id)arg1 ;
-(void)cancel;


@end


#endif