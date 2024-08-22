// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKACTIONBINDINGKEYPRESSED_H
#define OKACTIONBINDINGKEYPRESSED_H

@class NSString;


#import "OKActionBinding.h"

@interface OKActionBindingKeyPressed : OKActionBinding

@property (nonatomic) BOOL isKeyUp; // ivar: _isKeyUp
@property (retain, nonatomic) NSString *keyPressed; // ivar: _keyPressed


+(id)supportedSettings;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)dealloc;
-(void)setSettingIsKeyUp:(BOOL)arg0 ;
-(void)setSettingKeyPressed:(id)arg0 ;


@end


#endif