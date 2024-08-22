// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKACTIONBINDINGCUSTOM_H
#define OKACTIONBINDINGCUSTOM_H

@class NSString;


#import "OKActionBinding.h"

@interface OKActionBindingCustom : OKActionBinding

@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)supportedSettings;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif