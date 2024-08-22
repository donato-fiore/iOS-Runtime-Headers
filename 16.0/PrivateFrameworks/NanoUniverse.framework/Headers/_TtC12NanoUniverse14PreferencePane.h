// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12NANOUNIVERSE14PREFERENCEPANE_H
#define _TTC12NANOUNIVERSE14PREFERENCEPANE_H

@class NSDictionary, NSString, NSArray;
@protocol _TtP12NanoUniverse22PreferencePaneDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC12NanoUniverse14PreferencePane : NSObject <_TtP12NanoUniverse22PreferencePaneDelegate_>

 {
    ? _name;
    ? _panes;
    ? sliders;
    ? toggles;
    ? pickersSelections;
    ? defaultSliders;
    ? defaultToggles;
    ? defaultPickersSelections;
    ? pickerOptions;
    ? userDefaults;
}


@property (nonatomic, copy) NSDictionary *defaultPickersSelections;
@property (nonatomic, copy) NSDictionary *defaultSliders;
@property (nonatomic, copy) NSDictionary *defaultToggles;
@property (nonatomic, weak) NSObject<_TtP12NanoUniverse22PreferencePaneDelegate_> *delegate; // ivar: delegate
@property (nonatomic, readonly) CGFloat lightBloom;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *panes;
@property (nonatomic, copy) NSDictionary *pickerOptions;
@property (nonatomic, copy) NSArray *pickersSelections;
@property (nonatomic, copy) NSArray *sliders;
@property (nonatomic, copy) NSArray *toggles;


+(id)aegirRenderingPreferencePane;
-(id)fractionValueForOption:(id)arg0 ;
-(id)getValueForKey:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 panes:(id)arg1 ;
-(id)initWithName:(id)arg0 userDefaults:(id)arg1 sliders:(id)arg2 toggles:(id)arg3 pickerOptions:(id)arg4 pickerSelections:(id)arg5 ;
-(void)preferencePaneDidChangeWithPreference:(id)arg0 ;
-(void)reset;
-(void)set:(id)arg0 forKey:(id)arg1 ;


@end


#endif