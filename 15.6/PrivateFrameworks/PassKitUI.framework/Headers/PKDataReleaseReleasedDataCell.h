// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDATARELEASERELEASEDDATACELL_H
#define PKDATARELEASERELEASEDDATACELL_H

@class UITableViewCell, UILabel, UIView, UIImageView, NSString;



@interface PKDataReleaseReleasedDataCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_intentRetainLabel;
    UILabel *_retainElementsLabel;
    UIView *_separatorView;
    UILabel *_intentDoNotRetainLabel;
    UILabel *_doNotRetainElementsLabel;
    BOOL _isTemplateLayout;
    UIImageView *_disclosureView;
    BOOL _showDisclosure;
}


@property (copy, nonatomic) NSString *intentDoNotRetainElements; // ivar: _intentDoNotRetainElements
@property (copy, nonatomic) NSString *intentDoNotRetainTitle; // ivar: _intentDoNotRetainTitle
@property (copy, nonatomic) NSString *intentRetainElements; // ivar: _intentRetainElements
@property (copy, nonatomic) NSString *intentRetainTitle; // ivar: _intentRetainTitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif