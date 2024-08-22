// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUITEMTABLESECTIONHEADERFOOTERVIEW_H
#define HUITEMTABLESECTIONHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSArray, UILabel;
@protocol HFStringGenerator;


#import "HUTappableTextView.h"

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (nonatomic) UIEdgeInsets indentationInset; // ivar: _indentationInset
@property (copy, nonatomic) NSObject<HFStringGenerator> *message; // ivar: _message
@property (retain, nonatomic) HUTappableTextView *messageTextView; // ivar: _messageTextView
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)requiresConstraintBasedLayout;
+(id)defaultAttributesForType:(NSUInteger)arg0 ;
-(BOOL)_updateViewContent;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif