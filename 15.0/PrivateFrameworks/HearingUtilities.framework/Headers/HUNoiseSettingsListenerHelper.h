// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNOISESETTINGSLISTENERHELPER_H
#define HUNOISESETTINGSLISTENERHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HUNoiseSettingsListenerHelper : NSObject {
    id *_listenerAddress;
    NSMutableArray *_selectorKeys;
}




-(id)initWithListenerAddress:(id)arg0 ;
-(void)addSelectorKey:(SEL)arg0 ;
-(void)dealloc;


@end


#endif