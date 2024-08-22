// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBTABGROUP_H
#define WBTABGROUP_H

@class NSMutableArray, NSArray, NSString, NSDictionary, NSSet;
@protocol NSCopying, NSSecureCoding, WBSerializable;

#import <Foundation/Foundation.h>

#import "WebBookmark.h"

@interface WBTabGroup : NSObject <NSCopying, NSSecureCoding, WBSerializable>

 {
    NSMutableArray *_tabs;
    NSArray *_overflowRemoteTabs;
}


@property (readonly, nonatomic) NSArray *allTabs;
@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *deletedTabs; // ivar: _deletedTabs
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (copy, nonatomic) id *displayTitleProvider; // ivar: _displayTitleProvider
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *htmlString;
@property (nonatomic) int identifier;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isPrivate;
@property (copy, nonatomic) NSString *lastSelectedTabUUID; // ivar: _lastSelectedTabUUID
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) NSSet *tabsUUIDSet;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uuid;


+(BOOL)supportsSecureCoding;
+(id)localTabGroup;
+(id)privateTabGroup;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHidden;
-(BOOL)isIdentical:(id)arg0 ;
-(BOOL)tabsAreIdentical:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBookmark:(id)arg0 ;
-(id)initWithBookmark:(id)arg0 tabs:(id)arg1 lastSelectedTabUUID:(id)arg2 ;
-(id)initWithBookmark:(id)arg0 tabs:(id)arg1 lastSelectedTabUUID:(id)arg2 type:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 uuid:(id)arg1 ;
-(id)tabWithUUID:(id)arg0 ;
-(void)appendTab:(id)arg0 ;
-(void)appendTabs:(id)arg0 ;
-(void)clearDeletedTabs;
-(void)clearTabs;
-(void)detectDuplicatedTabs;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertTab:(id)arg0 afterTab:(id)arg1 ;
-(void)insertTabs:(id)arg0 afterTab:(id)arg1 ;
-(void)removeTab:(id)arg0 ;
-(void)removeTabs:(id)arg0 ;
-(void)reorderTab:(id)arg0 afterTab:(id)arg1 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)truncateToNumberOfTabs:(NSUInteger)arg0 ;
-(void)updateTab:(id)arg0 ;


@end


#endif