// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPIDENTIFIERLISTSECTIONPROXY_H
#define _MPIDENTIFIERLISTSECTIONPROXY_H

@class NSString, NSArray, NSMutableArray;
@protocol MPMutableIdentifierListSection;

#import <Foundation/Foundation.h>

#import "MPSectionedIdentifierList.h"

@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSMutableArray *mutableItemIdentifiers; // ivar: _mutableItemIdentifiers
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, weak, nonatomic) MPSectionedIdentifierList *sectionedIdentifierList; // ivar: _sectionedIdentifierList
@property (readonly) Class superclass;


-(id)initWithSection:(id)arg0 sectionedIdentifierList:(id)arg1 existingItemIdentifiers:(id)arg2 ;
-(void)applyChanges:(id)arg0 itemLookupBlock:(id)arg1 ;
-(void)insertItems:(id)arg0 afterItem:(id)arg1 ;
-(void)insertItemsAtHead:(id)arg0 ;
-(void)insertItemsAtTail:(id)arg0 ;
-(void)moveItem:(id)arg0 afterItem:(id)arg1 ;
-(void)moveItemToHead:(id)arg0 ;
-(void)moveItemToTail:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)updateItem:(id)arg0 ;
-(void)updateSection;


@end


#endif