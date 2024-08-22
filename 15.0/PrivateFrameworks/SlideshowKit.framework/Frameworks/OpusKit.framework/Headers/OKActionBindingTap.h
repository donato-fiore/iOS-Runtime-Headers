// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKACTIONBINDINGTAP_H
#define OKACTIONBINDINGTAP_H

@class UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;


#import "OKActionBinding.h"

@interface OKActionBindingTap : OKActionBinding <UIGestureRecognizerDelegate>

 {
    UITapGestureRecognizer *_tapGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfTapsRequired; // ivar: _numberOfTapsRequired
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)dealloc;
-(void)handleTap:(id)arg0 ;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)unload;


@end


#endif