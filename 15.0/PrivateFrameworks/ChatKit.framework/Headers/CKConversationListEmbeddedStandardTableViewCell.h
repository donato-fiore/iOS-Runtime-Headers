// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLISTEMBEDDEDSTANDARDTABLEVIEWCELL_H
#define CKCONVERSATIONLISTEMBEDDEDSTANDARDTABLEVIEWCELL_H

@class NSString;
@protocol CKConversationListEmbeddedTableViewCellProtocol, CKConversationListCellDelegate;


#import "CKConversationListStandardCell.h"

@interface CKConversationListEmbeddedStandardTableViewCell : CKConversationListStandardCell <CKConversationListEmbeddedTableViewCellProtocol>



@property (nonatomic) CGRect containerBounds; // ivar: _containerBounds
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (nonatomic) BOOL shouldHidePreviewSummary;
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)chevronImageView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif