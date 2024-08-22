// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHARETOGGLESECTIONCONTROLLER_H
#define PKPASSSHARETOGGLESECTIONCONTROLLER_H

@class NSString, UIImage;
@protocol PKPassShareToggleSectionControllerDelegate;


#import "PKPassShareSectionController.h"

@interface PKPassShareToggleSectionController : PKPassShareSectionController {
    NSString *_identifier;
    NSString *_title;
    BOOL _isEditable;
}


@property (weak, nonatomic) NSObject<PKPassShareToggleSectionControllerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSString *footerText; // ivar: _footerText
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL toggleValue; // ivar: _toggleValue


-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)footerAttributedStringForIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 toggleValue:(BOOL)arg2 isEditable:(BOOL)arg3 delegate:(id)arg4 ;
-(void)decorateCell:(id)arg0 forIdentifier:(id)arg1 ;
-(void)toggleValueDidChange:(id)arg0 ;


@end


#endif