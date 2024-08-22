// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUISYSTEMINPUTASSISTANTLAYOUT_H
#define TUISYSTEMINPUTASSISTANTLAYOUT_H


#import <Foundation/Foundation.h>


@interface TUISystemInputAssistantLayout : NSObject

@property (nonatomic) BOOL usesUnifiedButtonBar; // ivar: _usesUnifiedButtonBar


-(id)_buttonBarGroupSetForApplicationAssistantItem:(id)arg0 withSystemInputAssistantItem:(id)arg1 forAssistantView:(id)arg2 ;
-(void)configureButtonBarsInViewSet:(id)arg0 forApplicationAssistantItem:(id)arg1 withSystemAssistantItem:(id)arg2 withAssistantView:(id)arg3 ;
-(void)invalidate:(id)arg0 ;
-(void)layoutViewSet:(id)arg0 inBounds:(struct CGRect )arg1 forAssistantView:(id)arg2 ;


@end


#endif