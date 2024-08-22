// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICEXPANSIONSTATE_H
#define ICEXPANSIONSTATE_H

@class NSDictionary, NSMutableDictionary, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface ICExpansionState : NSObject

@property (readonly, nonatomic) NSDictionary *archiveDictionary;
@property (retain, nonatomic) NSMutableDictionary *expansionState; // ivar: _expansionState
@property (retain, nonatomic) NSManagedObjectContext *legacyViewContext; // ivar: _legacyViewContext
@property (retain, nonatomic) NSManagedObjectContext *modernViewContext; // ivar: _modernViewContext


+(id)sharedExpansionState;
-(BOOL)isSectionIdentiferExpanded:(id)arg0 inContext:(id)arg1 ;
-(id)archivableIdentifierForItemIdentifier:(id)arg0 ;
-(id)expandedObjectIDsInContext:(id)arg0 ;
-(id)identifierForArchivableIdentifier:(id)arg0 itemType:(id)arg1 ;
-(id)init;
-(id)itemTypeForItemIdentifier:(id)arg0 ;
-(id)normalizedContext:(id)arg0 ;
-(id)normalizedItemIdentifier:(id)arg0 ;
-(void)applyArchiveDictionary:(id)arg0 ;
-(void)collapseItemIdentifier:(id)arg0 inContext:(id)arg1 ;
-(void)expandItemIdentifier:(id)arg0 inContext:(id)arg1 ;
-(void)setExpanded:(BOOL)arg0 itemIdentifier:(id)arg1 itemType:(id)arg2 inContext:(id)arg3 ;


@end


#endif