// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKACTIONBINDINGPROXY_H
#define OKACTIONBINDINGPROXY_H

@class NSString, NSArray;
@protocol UIGestureRecognizerDelegate, OKSettingsSupport, NSCopying, OKActionResponder;

#import <Foundation/Foundation.h>


@interface OKActionBindingProxy : NSObject <UIGestureRecognizerDelegate, OKSettingsSupport, NSCopying>



@property (readonly) NSObject<OKActionResponder> *actionResponder; // ivar: _actionResponder
@property (copy, nonatomic) NSString *actionScript; // ivar: _actionScript
@property (nonatomic) BOOL alwaysRecognizeSimultaneously; // ivar: _alwaysRecognizeSimultaneously
@property (nonatomic) BOOL canBeTriggeredWithoutInteractivity; // ivar: _canBeTriggeredWithoutInteractivity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *requireToFail; // ivar: _requireToFail
@property (readonly) NSUInteger scope; // ivar: _scope
@property (nonatomic) SEL selector; // ivar: _selector
@property (copy, nonatomic) NSArray *shouldRecognizeSimultaneously; // ivar: _shouldRecognizeSimultaneously
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tag; // ivar: _tag
@property (nonatomic) id *target; // ivar: _target


+(id)actionBinding;
+(id)actionBindingWithGestureRecognizer:(id)arg0 fromActionResponder:(id)arg1 ;
+(id)supportedSettings;
-(BOOL)ownsGestureRecognizer:(id)arg0 ;
-(BOOL)performAction:(id)arg0 ;
-(BOOL)respondsToAction:(id)arg0 isTouchCountAgnostic:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(struct CGPoint )locationForActionFromGesture:(id)arg0 ;
-(void)dealloc;
-(void)loadForResponder:(id)arg0 scope:(NSUInteger)arg1 ;
-(void)prepareAction:(id)arg0 ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)unload;


@end


#endif