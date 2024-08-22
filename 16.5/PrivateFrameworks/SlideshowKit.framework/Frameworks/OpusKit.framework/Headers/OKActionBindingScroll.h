// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONBINDINGSCROLL_H
#define OKACTIONBINDINGSCROLL_H



#import "OKActionBinding.h"

@interface OKActionBindingScroll : OKActionBinding {
    NSUInteger _triggerLimit;
    NSUInteger _probability;
    BOOL _continuous;
}


@property (nonatomic) CGPoint offset; // ivar: _offset


+(id)supportedSettings;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif