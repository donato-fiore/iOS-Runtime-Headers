// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTAGFACTORY_H
#define WFTAGFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFTagFactory : NSObject {
    NSMutableDictionary *sharedTags;
}




+(id)defaultFactory;
+(id)tagsForWebpage:(id)arg0 ;
-(id)init;
-(id)tagWithClass:(Class)arg0 webpage:(id)arg1 ;
-(void)dealloc;


@end


#endif