// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXHASETTINGSLISTENERHELPER_H
#define AXHASETTINGSLISTENERHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AXHASettingsListenerHelper : NSObject {
    id *_listenerAddress;
    NSMutableArray *_selectorKeys;
}




-(id)initWithListenerAddress:(id)arg0 ;
-(void)addSelectorKey:(SEL)arg0 ;
-(void)dealloc;


@end


#endif