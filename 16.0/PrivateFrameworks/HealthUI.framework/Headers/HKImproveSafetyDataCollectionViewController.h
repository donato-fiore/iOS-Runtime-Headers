// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKIMPROVESAFETYDATACOLLECTIONVIEWCONTROLLER_H
#define HKIMPROVESAFETYDATACOLLECTIONVIEWCONTROLLER_H

@class OBTextWelcomeController;



@interface HKImproveSafetyDataCollectionViewController : OBTextWelcomeController

@property (copy, nonatomic) id *completion; // ivar: _completion


+(BOOL)needsRequestedPermission;
+(id)localizedStringWithKey:(id)arg0 ;
+(id)localizedStringWithKey:(id)arg0 hasMaskedVariant:(BOOL)arg1 ;
+(void)presentInViewController:(id)arg0 completion:(id)arg1 ;
-(BOOL)shouldInlineButtonTray;
-(id)localizedStringWithKey:(id)arg0 ;
-(id)localizedStringWithKey:(id)arg0 hasMaskedVariant:(BOOL)arg1 ;
-(void)_disableDataCollection;
-(void)_enableDataCollection;
-(void)_setDataCollectionToNewValue:(BOOL)arg0 ;
-(void)_showDataCollectionAdditionalInfo;
-(void)setUpButtons;
-(void)setUpContent;
-(void)viewDidLoad;


@end


#endif