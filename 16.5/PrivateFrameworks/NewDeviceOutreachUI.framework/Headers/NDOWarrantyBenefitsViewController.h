// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOWARRANTYBENEFITSVIEWCONTROLLER_H
#define NDOWARRANTYBENEFITSVIEWCONTROLLER_H

@class OBTextWelcomeController, NDOWarranty;



@interface NDOWarrantyBenefitsViewController : OBTextWelcomeController

@property (weak) NDOWarranty *warranty; // ivar: _warranty


-(id)initWithWarranty:(id)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)loadView;


@end


#endif