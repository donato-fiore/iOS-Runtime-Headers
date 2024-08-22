// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSETTINGSOBJECTDESTRUCTIONHELPER_H
#define AXSETTINGSOBJECTDESTRUCTIONHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "AXBaseSettings.h"

@interface AXSettingsObjectDestructionHelper : NSObject {
    *void _listenerAddress;
    NSMutableArray *_selectorKeys;
    AXBaseSettings *_settings;
}




-(id)initWithListenerAddress:(*void)arg0 forSettings:(id)arg1 ;
-(void)addSelectorKey:(SEL)arg0 ;
-(void)dealloc;


@end


#endif