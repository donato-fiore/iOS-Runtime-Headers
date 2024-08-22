// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NASIMPLEDIFFABLEITEMGROUP_H
#define NASIMPLEDIFFABLEITEMGROUP_H

@class NSString, NSArray;
@protocol NADiffableItemGroup, NSCopying;

#import <Foundation/Foundation.h>


@interface NASimpleDiffableItemGroup : NSObject <NADiffableItemGroup, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *diffableItems; // ivar: _diffableItems
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif