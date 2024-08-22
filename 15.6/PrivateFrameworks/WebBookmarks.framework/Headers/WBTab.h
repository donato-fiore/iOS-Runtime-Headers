// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBTAB_H
#define WBTAB_H

@class NSString, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding, WBSerializable;

#import <Foundation/Foundation.h>

#import "WebBookmark.h"
#import "WBLocalTabAttributes.h"
#import "WBTabGroup.h"

@interface WBTab : NSObject <NSCopying, NSSecureCoding, WBSerializable>



@property (nonatomic, getter=wasAdded) BOOL added; // ivar: _added
@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isPrivateTab;
@property (retain, nonatomic) WBLocalTabAttributes *localAttributes;
@property (nonatomic, getter=wasModified) BOOL modified; // ivar: _modified
@property (nonatomic, getter=wasMoved) BOOL moved; // ivar: _moved
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, nonatomic) NSURL *syncableURL;
@property (weak, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *uuid;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIdentical:(id)arg0 ;
-(id)_addressFromURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)duplicate;
-(id)initWithBookmark:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 title:(id)arg1 url:(id)arg2 ;
-(void)adoptAttributesFromTab:(id)arg0 ;
-(void)didAddToTabGroup:(id)arg0 ;
-(void)didRemoveFromTabGroup:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markClean;


@end


#endif