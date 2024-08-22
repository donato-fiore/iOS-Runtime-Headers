// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPOSTALADDRESSEDITORNAVIGATIONCONTROLLER_H
#define CNPOSTALADDRESSEDITORNAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol CNPostalAddressEditorDelegate;



@interface CNPostalAddressEditorNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<CNPostalAddressEditorDelegate> *addressEditorDelegate; // ivar: _addressEditorDelegate


-(id)initWithContact:(id)arg0 propertyKey:(id)arg1 editNames:(BOOL)arg2 ;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 addressDictionary:(id)arg2 label:(id)arg3 ;
-(id)initWithPropertyKey:(id)arg0 label:(id)arg1 ;
-(void)doneWithContact:(id)arg0 propertyKey:(id)arg1 ;
-(void)setTitle:(id)arg0 ;


@end


#endif