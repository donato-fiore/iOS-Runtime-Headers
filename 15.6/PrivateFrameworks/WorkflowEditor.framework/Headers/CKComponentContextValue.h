// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTCONTEXTVALUE_H
#define CKCOMPONENTCONTEXTVALUE_H

@class NSMutableDictionary;
@protocol CKComponentContextDynamicLookup;

#import <Foundation/Foundation.h>


@interface CKComponentContextValue : NSObject {
    NSMutableDictionary *_dictionary;
    id<CKComponentContextDynamicLookup> *_dynamicLookup;
}






@end


#endif