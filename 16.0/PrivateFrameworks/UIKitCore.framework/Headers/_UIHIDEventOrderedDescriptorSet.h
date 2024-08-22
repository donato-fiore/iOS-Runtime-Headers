// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHIDEVENTORDEREDDESCRIPTORSET_H
#define _UIHIDEVENTORDEREDDESCRIPTORSET_H

@class NSMutableOrderedSet, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHIDEventOrderedDescriptorSet : NSObject <NSCopying>

 {
    NSMutableOrderedSet *_orderedDescriptors;
    NSMutableDictionary *_eventsByDescriptor;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif