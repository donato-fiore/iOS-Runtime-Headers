// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAREPREVIEWROWITEM_H
#define PKSHAREPREVIEWROWITEM_H

@class NSString, UIImage, UIColor;
@protocol PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKSharePreviewRowItem : NSObject <PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayChevron; // ivar: _displayChevron
@property (nonatomic) NSUInteger displayToggleState; // ivar: _displayToggleState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isShowingSensitiveContent; // ivar: _isShowingSensitiveContent
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (nonatomic) BOOL toggleEnabled; // ivar: _toggleEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharePreviewRowItem:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif