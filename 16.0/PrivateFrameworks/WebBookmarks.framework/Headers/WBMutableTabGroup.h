// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBMUTABLETABGROUP_H
#define WBMUTABLETABGROUP_H

@class NSArray, NSString, WBSCRDTPosition;
@protocol NSCopying;


#import "WBTabGroup.h"

@interface WBMutableTabGroup : WBTabGroup <NSCopying>



@property (readonly, copy, nonatomic) NSArray *allMutableTabs;
@property (copy, nonatomic) NSArray *deletedTabs;
@property (copy, nonatomic) id *displayTitleProvider;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) int identifier;
@property (nonatomic) NSInteger kind;
@property (copy, nonatomic) NSString *lastSelectedTabUUID;
@property (copy, nonatomic) NSArray *mutableTabs;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSString *title;


+(id)localTabGroup;
+(id)privateTabGroup;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableTabWithUUID:(id)arg0 ;
-(void)_fixLastSelectedTabIfNeeded;
-(void)appendTabs:(id)arg0 ;
-(void)clearDeletedTabs;
-(void)clearTabs;
-(void)deleteTabs:(id)arg0 ;
-(void)insertTabs:(id)arg0 afterTab:(id)arg1 ;
-(void)markBackgroundImageAsModified;
-(void)mergeWithTabGroup:(id)arg0 ;
-(void)removeTab:(id)arg0 ;
-(void)reorderTab:(id)arg0 afterTab:(id)arg1 ;
-(void)truncateToNumberOfTabs:(NSUInteger)arg0 ;
-(void)updateLastSelectedTab;


@end


#endif