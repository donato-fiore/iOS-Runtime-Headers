// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTINSERTIONCACHEITEM_H
#define SXCOMPONENTINSERTIONCACHEITEM_H

@class NSArray;
@protocol SXComponentInserter, SXComponentInsertionCacheValidator;

#import <Foundation/Foundation.h>


@interface SXComponentInsertionCacheItem : NSObject {
    id<SXComponentInserter> *_inserter;
    id<SXComponentInsertionCacheValidator> *_validator;
    NSArray *_results;
}






@end


#endif