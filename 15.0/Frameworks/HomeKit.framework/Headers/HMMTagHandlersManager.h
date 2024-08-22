// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMTAGHANDLERSMANAGER_H
#define HMMTAGHANDLERSMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMMTagHandlersManager : NSObject {
    NSMutableDictionary *_handlers;
}




-(id)handlersForTagName:(id)arg0 ;
-(id)init;
// -(void)addHandler:(id)arg0 forTagName:(unk)arg1  ;


@end


#endif