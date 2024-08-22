// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVLINKOOVITEMBUILDER_H
#define KVLINKOOVITEMBUILDER_H


#import <Foundation/Foundation.h>

#import "KVItemBuilder.h"

@interface KVLinkOOVItemBuilder : NSObject {
    KVItemBuilder *_builder;
}




+(void)initialize;
-(id)_buildItemWithError:(*id)arg0 ;
-(id)init;
-(id)linkOOVItemWithPhrase:(id)arg0 itemId:(id)arg1 customPronunciations:(id)arg2 error:(*id)arg3 ;


@end


#endif