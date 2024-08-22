// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPSTITCHINGSESSION_H
#define FPSTITCHINGSESSION_H

@class NSMutableDictionary, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FPStitchingSession : NSObject {
    NSMutableDictionary *_stitchedFields;
    NSMutableDictionary *_originalItems;
    NSMutableDictionary *_stitchedItems;
    NSMutableDictionary *_stitchedPlaceholders;
    NSMutableDictionary *_placeholderReplacements;
    NSMutableDictionary *_deletedItems;
    BOOL _started;
    BOOL _finished;
}


@property (readonly, nonatomic) NSArray *deletedIDs;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSArray *placeholderItems;
@property (readonly, nonatomic) NSArray *placeholderReplacementsIDs;
@property (copy, nonatomic) id *placeholdersCreationBlock; // ivar: _placeholdersCreationBlock
@property (readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;
@property (readonly, nonatomic) NSDictionary *stitchedItemsByParentID;


-(BOOL)cleanStitchedItemForItemID:(id)arg0 ;
-(id)createArchivePlaceholderForItem:(id)arg0 underParent:(id)arg1 inProviderDomainID:(id)arg2 ;
-(id)createGenericArchivePlaceholderUnderParent:(id)arg0 inProviderDomainID:(id)arg1 ;
-(id)createPlaceholderWithCopyOfExistingItem:(id)arg0 lastUsageUpdatePolicy:(NSUInteger)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3 ;
-(id)createPlaceholderWithName:(id)arg0 contentType:(id)arg1 contentAccessDate:(id)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
-(id)createPlaceholderWithName:(id)arg0 isFolder:(BOOL)arg1 contentAccessDate:(id)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
-(id)createPlaceholderWithName:(id)arg0 typeIdentifier:(id)arg1 contentAccessDate:(id)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
-(id)init;
-(id)itemWithPlaceholderID:(id)arg0 ;
-(void)associateItem:(id)arg0 withPlaceholderID:(id)arg1 ;
-(void)dealloc;
-(void)deleteItems:(id)arg0 ;
-(void)finish;
-(void)finishWithItem:(id)arg0 error:(id)arg1 ;
-(void)finishWithItems:(id)arg0 error:(id)arg1 ;
-(void)flush;
-(void)replacePlaceholderWithID:(id)arg0 withItem:(id)arg1 ;
-(void)start;
-(void)transformItems:(id)arg0 handler:(id)arg1 ;
-(void)trashItems:(id)arg0 ;


@end


#endif