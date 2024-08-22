// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDISPLAYTYPEDESCRIPTIONTABLEVIEWCELL_H
#define WDDISPLAYTYPEDESCRIPTIONTABLEVIEWCELL_H

@class UITableViewCell, HKDisplayType;


#import "WDDisplayTypeDescriptionView.h"

@interface WDDisplayTypeDescriptionTableViewCell : UITableViewCell {
    WDDisplayTypeDescriptionView *_descriptionView;
}


@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (nonatomic) BOOL showAttributionText; // ivar: _showAttributionText


+(CGFloat)minimumHeight;
+(id)defaultReuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 showAttributionText:(BOOL)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setupSubviews;


@end


#endif