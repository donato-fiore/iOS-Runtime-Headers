// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBUTTONSETTINGS_H
#define _UIBUTTONSETTINGS_H

@class PTSettings, NSString;
@protocol PTSettingsKeyObserver;



@interface _UIButtonSettings : PTSettings <PTSettingsKeyObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightAlternateColor; // ivar: _highlightAlternateColor
@property (nonatomic) BOOL highlightBelow; // ivar: _highlightBelow
@property (nonatomic) BOOL highlightIgnoresBars; // ivar: _highlightIgnoresBars
@property (nonatomic) BOOL highlightMode; // ivar: _highlightMode
@property (nonatomic) BOOL highlightSubclasses; // ivar: _highlightSubclasses
@property (readonly) Class superclass;


+(id)settingsControllerModule;
-(id)initWithDefaultValues;
-(void)setDefaultValues;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif