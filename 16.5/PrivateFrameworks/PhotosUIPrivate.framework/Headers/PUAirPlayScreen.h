// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUAIRPLAYSCREEN_H
#define PUAIRPLAYSCREEN_H

@class NSString, UIWindow, UIViewController, UIScreen;
@protocol PXSettingsKeyObserver;

#import <Foundation/Foundation.h>


@interface PUAirPlayScreen : NSObject <PXSettingsKeyObserver>



@property (readonly, nonatomic) NSString *_typeName;
@property (retain, nonatomic, setter=_setWindow:) UIWindow *_window; // ivar: __window
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setIdentifier:) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger placeholderType;
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (retain, nonatomic, setter=_setScreen:) UIScreen *screen; // ivar: _screen
@property (nonatomic, setter=_setSize:) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (nonatomic, setter=_setType:) NSUInteger type; // ivar: _type


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAirPlayScreen:(id)arg0 ;
-(id)init;
-(id)initWithScreen:(id)arg0 ;
-(void)_updateWindow;
-(void)dealloc;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif