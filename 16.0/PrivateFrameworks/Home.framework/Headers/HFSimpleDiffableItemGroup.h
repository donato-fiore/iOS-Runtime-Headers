// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSIMPLEDIFFABLEITEMGROUP_H
#define HFSIMPLEDIFFABLEITEMGROUP_H

@class NSString, NSArray;
@protocol HFDiffableItemGroup, NSCopying;

#import <Foundation/Foundation.h>


@interface HFSimpleDiffableItemGroup : NSObject <HFDiffableItemGroup, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *diffableItems; // ivar: _diffableItems
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif