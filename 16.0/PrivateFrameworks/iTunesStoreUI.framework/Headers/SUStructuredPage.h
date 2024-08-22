// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSTRUCTUREDPAGE_H
#define SUSTRUCTUREDPAGE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SUItem.h"
#import "SUItemList.h"
#import "SUStorePageProtocol.h"
#import "SUPageSectionGroup.h"

@interface SUStructuredPage : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL artworkShouldFitWidth; // ivar: _artworkShouldFitWidth
@property (readonly, nonatomic) CGFloat artworkWidth; // ivar: _artworkWidth
@property (readonly, nonatomic) BOOL didShowDialog; // ivar: _didShowDialog
@property (readonly, nonatomic) NSInteger displayStyle; // ivar: _displayStyle
@property (readonly, nonatomic) BOOL hasDisplayableContent;
@property (retain, nonatomic) SUItem *item; // ivar: _item
@property (retain, nonatomic) SUItemList *itemList; // ivar: _itemList
@property (retain, nonatomic) SUStorePageProtocol *protocol; // ivar: _protocol
@property (retain, nonatomic) SUPageSectionGroup *sectionsGroup; // ivar: _sectionsGroup
@property (readonly, nonatomic) BOOL shouldHideSignInButton; // ivar: _shouldHideSignInButton
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL wantsIndexBar; // ivar: _wantsIndexBar


+(NSInteger)pageTypeForStorePageDictionary:(id)arg0 ;
+(NSInteger)pageTypeForStorePageString:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 ;
-(NSInteger)_displayStyleForString:(id)arg0 ;
-(id)_copyItemFromDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_parseItemsFromDictionary:(id)arg0 ;
-(void)_parseProtocolFromDictionary:(id)arg0 ;
-(void)_parseTemplateParametersFromDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif