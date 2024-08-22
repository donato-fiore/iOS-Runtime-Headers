// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERTILEDETAILROW_H
#define PKPAYLATERTILEDETAILROW_H

@class NSString, UIView;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterTileDetailRow : NSObject <PKPayLaterCollectionViewRow>

 {
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_text;
    NSString *_detailText;
    NSString *_textSubtitle;
    UIView *_customView;
    id *_selectionHandler;
}


@property (nonatomic) NSUInteger accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithTitleText:(id)arg0 subtitleText:(id)arg1 text:(id)arg2 detailText:(id)arg3 textSubtitle:(id)arg4 customView:(id)arg5 selectionHandler:(id)arg6 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif