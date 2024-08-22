// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGAPPLAUNCHHISTORY_H
#define SGAPPLAUNCHHISTORY_H

@class _DKKnowledgeStore;

#import <Foundation/Foundation.h>


@interface SGAppLaunchHistory : NSObject {
    _DKKnowledgeStore *_knowledgeStore;
}




-(NSUInteger)launchCountForBundleId:(id)arg0 afterDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)init;


@end


#endif