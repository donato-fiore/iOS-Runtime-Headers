// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT23MAGNIFIERCOMMANDMANAGER_H
#define _TTC16MAGNIFIERSUPPORT23MAGNIFIERCOMMANDMANAGER_H

@class UIResponder, NSArray;



@interface _TtC16MagnifierSupport23MagnifierCommandManager : UIResponder {
    ? nextResponderResolver;
    ? allKeyCommands;
}


@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) UIResponder *nextResponder;


-(id)init;
-(void)decreaseBrightness:(id)arg0 ;
-(void)decreaseContrast:(id)arg0 ;
-(void)decreaseZoom:(id)arg0 ;
-(void)increaseBrightness:(id)arg0 ;
-(void)increaseContrast:(id)arg0 ;
-(void)increaseZoom:(id)arg0 ;
-(void)nextFilter:(id)arg0 ;
-(void)previousFilter:(id)arg0 ;
-(void)toggleFlashlight:(id)arg0 ;
-(void)toggleFocus:(id)arg0 ;


@end


#endif