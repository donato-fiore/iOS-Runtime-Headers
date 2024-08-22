// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSORDEREDCOLLECTIONDIFFERENCEMOVES_H
#define _NSORDEREDCOLLECTIONDIFFERENCEMOVES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _NSOrderedCollectionDifferenceMoves : NSObject {
    NSMutableDictionary *_removeDict;
    NSMutableDictionary *_insertDict;
    NSUInteger _firstRemove;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif