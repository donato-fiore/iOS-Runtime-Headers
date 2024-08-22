// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HCSETTINGSLISTENERHELPER_H
#define HCSETTINGSLISTENERHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "HCSettings.h"

@interface HCSettingsListenerHelper : NSObject {
    id *_listenerAddress;
    HCSettings *_delegate;
    NSMutableArray *_selectorKeys;
}




-(id)initWithListenerAddress:(id)arg0 andDelegate:(id)arg1 ;
-(void)addSelectorKey:(SEL)arg0 ;
-(void)dealloc;


@end


#endif