// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDIALOGLISTITEM_H
#define WFDIALOGLISTITEM_H

@class NSData, WFContentItem, NSString, WFImage;
@protocol NSCopying, NSSecureCoding, WFPropertyListObject;

#import <Foundation/Foundation.h>


@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *archivedContentItem; // ivar: _archivedContentItem
@property (retain, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hideSubtitle; // ivar: _hideSubtitle
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) WFImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSObject<WFPropertyListObject> *serializedPossibleState; // ivar: _serializedPossibleState
@property (readonly, nonatomic) BOOL showingStaticContent;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)loadAltTextWithCompletion:(id)arg0 ;
-(BOOL)loadImageWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(BOOL)loadSubtitleWithCompletion:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentItem:(id)arg0 selected:(BOOL)arg1 hideSubtitle:(BOOL)arg2 ;
-(id)initWithContentItem:(id)arg0 selected:(BOOL)arg1 serializedPossibleState:(id)arg2 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 selected:(BOOL)arg3 contentItem:(id)arg4 hideSubtitle:(BOOL)arg5 serializedPossibleState:(id)arg6 ;
-(void)_loadContentItemWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForDisplayWithCompletionHandler:(id)arg0 ;


@end


#endif