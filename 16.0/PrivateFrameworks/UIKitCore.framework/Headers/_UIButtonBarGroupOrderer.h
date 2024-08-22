// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBUTTONBARGROUPORDERER_H
#define _UIBUTTONBARGROUPORDERER_H

@class NSMutableOrderedSet, NSMutableSet, NSArray, NSString;
@protocol _UIButtonBarGroupOrderOwner;

#import <Foundation/Foundation.h>


@interface _UIButtonBarGroupOrderer : NSObject {
    NSMutableOrderedSet *_includedItems;
    NSMutableSet *_excludedItems;
    NSArray *_orderedGroups;
    NSString *_customizationIdentifier;
    id<_UIButtonBarGroupOrderOwner> *_owner;
}




-(BOOL)_hasCustomization;
-(id)_initWithCustomizationIdentifier:(id)arg0 data:(id)arg1 ;
-(void)_orderGroups;


@end


#endif