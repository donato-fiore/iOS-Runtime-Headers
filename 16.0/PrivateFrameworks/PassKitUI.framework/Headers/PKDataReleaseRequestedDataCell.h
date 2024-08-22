// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDATARELEASEREQUESTEDDATACELL_H
#define PKDATARELEASEREQUESTEDDATACELL_H

@class UITableViewCell, UILabel, NSMutableArray, UIView, NSArray, NSString;



@interface PKDataReleaseRequestedDataCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_intentRetainLabel;
    NSMutableArray *_retainElementViews;
    UIView *_separatorView;
    UILabel *_intentDoNotRetainLabel;
    NSMutableArray *_doNotRetainElementViews;
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) NSArray *intentDoNotRetainElements; // ivar: _intentDoNotRetainElements
@property (copy, nonatomic) NSString *intentDoNotRetainTitle; // ivar: _intentDoNotRetainTitle
@property (copy, nonatomic) NSArray *intentRetainElements; // ivar: _intentRetainElements
@property (copy, nonatomic) NSString *intentRetainTitle; // ivar: _intentRetainTitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_recreateViews:(id)arg0 forElements:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif