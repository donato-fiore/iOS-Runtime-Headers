// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUINAVIGATIONLISTITEM_H
#define CNUINAVIGATIONLISTITEM_H

@class NSString, UIImage, NSArray;
@protocol CNUINavigationListItemContent;

#import <Foundation/Foundation.h>

#import "CNUINavigationListItem.h"

@interface CNUINavigationListItem : NSObject <CNUINavigationListItemContent>



@property (retain, nonatomic) NSObject<CNUINavigationListItemContent> *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CNUINavigationListItem *defaultItem; // ivar: _defaultItem
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (weak, nonatomic) CNUINavigationListItem *parent; // ivar: _parent
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)faceTimeNavigationListItemsForUserActionListModel:(id)arg0 ;
+(id)favoritesNavigationListItemsForUserActionListModel:(id)arg0 ;
+(id)itemForActionItem:(id)arg0 isGrouped:(BOOL)arg1 ;
+(id)localizedLabelForActionItem:(id)arg0 usingPropertyLabel:(BOOL)arg1 ;
+(id)navigationListItemForContactProperty:(id)arg0 ;
+(id)navigationListItemsForUserActionListModel:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 ;


@end


#endif