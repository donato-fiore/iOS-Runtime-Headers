// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBTAB_H
#define WBTAB_H

@class NSString, NSDictionary, NSURL, WBSCRDTPosition;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable;

#import <Foundation/Foundation.h>

#import "WebBookmark.h"
#import "WBLocalTabAttributes.h"
#import "WBTabGroup.h"

@interface WBTab : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable>



@property (readonly, nonatomic, getter=wasAdded) BOOL added; // ivar: _added
@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isMarkedAsRead;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isPrivateTab;
@property (readonly, nonatomic) WBLocalTabAttributes *localAttributes;
@property (readonly, nonatomic, getter=wasModified) BOOL modified; // ivar: _modified
@property (readonly, nonatomic, getter=wasMoved) BOOL moved; // ivar: _moved
@property (readonly, nonatomic) int orderIndex;
@property (readonly, nonatomic) int parentIdentifier;
@property (readonly, copy, nonatomic) NSString *pinnedTitle;
@property (readonly, copy, nonatomic) NSURL *pinnedURL;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, copy, nonatomic) NSURL *syncableURL;
@property (readonly, weak, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *uuid;


+(BOOL)supportsSecureCoding;
+(id)startPageTabWithDeviceIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIdentical:(id)arg0 ;
-(id)_addressFromURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)duplicate;
-(id)initWithBookmark:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 deviceIdentifier:(id)arg2 ;
-(id)initWithUUID:(id)arg0 deviceIdentifier:(id)arg1 ;
-(id)initWithUUID:(id)arg0 title:(id)arg1 url:(id)arg2 deviceIdentifier:(id)arg3 ;
-(id)initWithUUID:(id)arg0 title:(id)arg1 url:(id)arg2 pinned:(BOOL)arg3 pinnedTitle:(id)arg4 pinnedURL:(id)arg5 localAttributes:(id)arg6 deviceIdentifier:(id)arg7 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableDuplicate;
-(void)_setLocalURLString:(id)arg0 ;
-(void)_updateBookmarkWithURL:(id)arg0 shouldSync:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif