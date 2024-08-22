// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIPREFERENCEPANE_H
#define NUNIPREFERENCEPANE_H

@protocol _TtP12NanoUniverse22PreferencePaneDelegate_, NUNIPreferencePaneDelegate;

#import <Foundation/Foundation.h>

#import "_TtC12NanoUniverse14PreferencePane.h"

@interface NUNIPreferencePane : NSObject <_TtP12NanoUniverse22PreferencePaneDelegate_>

 {
    _TtC12NanoUniverse14PreferencePane *_preference;
}


@property (weak, nonatomic) NSObject<NUNIPreferencePaneDelegate> *delegate; // ivar: _delegate


-(CGFloat)lightBloom;
-(id)initWithPreferencePane:(id)arg0 ;
-(id)initWithSliders:(id)arg0 toggles:(id)arg1 pickerOptions:(id)arg2 pickerSelections:(id)arg3 ;
-(void)preferencePaneDidChangeWithPreference:(id)arg0 ;


@end


#endif