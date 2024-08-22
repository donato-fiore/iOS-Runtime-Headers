// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYLISTENERHELPER_H
#define HUACCESSORYLISTENERHELPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "HUAccessoryManager.h"

@interface HUAccessoryListenerHelper : NSObject {
    id *_listenerAddress;
    HUAccessoryManager *_delegate;
    NSMutableArray *_keys;
}




-(id)initWithListenerAddress:(id)arg0 andDelegate:(id)arg1 ;
-(void)addKey:(id)arg0 ;
-(void)dealloc;


@end


#endif