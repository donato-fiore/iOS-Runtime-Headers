// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSABOUTDETAILVIEWCONTROLLER_H
#define BPSABOUTDETAILVIEWCONTROLLER_H

@class OBTextWelcomeController, NSArray, NSString, UIImage;



@interface BPSAboutDetailViewController : OBTextWelcomeController

@property (retain, nonatomic) NSArray *bullets; // ivar: _bullets
@property (retain, nonatomic) NSString *footerString; // ivar: _footerString
@property (retain, nonatomic) UIImage *headerGlyph; // ivar: _headerGlyph
@property (retain, nonatomic) NSString *headerString; // ivar: _headerString
@property (copy, nonatomic) id *onDismiss; // ivar: _onDismiss
@property (retain, nonatomic) NSArray *paragraphs; // ivar: _paragraphs
@property (retain, nonatomic) NSString *titleString; // ivar: _titleString


-(BOOL)contentViewIsInAdjustedScrollView;
-(id)init;
-(void)donePressed;
-(void)presentWithController:(id)arg0 ;
-(void)presentWithController:(id)arg0 onDismiss:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif