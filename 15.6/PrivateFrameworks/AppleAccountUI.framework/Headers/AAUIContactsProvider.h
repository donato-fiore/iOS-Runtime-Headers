// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUICONTACTSPROVIDER_H
#define AAUICONTACTSPROVIDER_H

@class AAContactsProvider, AAContactsManager;



@interface AAUIContactsProvider : AAContactsProvider {
    AAContactsManager *_contactsManager;
}




-(id)init;
-(void)_fetchImageDataForLocalContact:(id)arg0 ofSize:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)_fetchImagesForContacts:(id)arg0 ofSize:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_fetchServerImageDataFor:(id)arg0 WithCompletion:(id)arg1 ;
-(void)fetchSuggestedBeneficiariesWithImagesOfSize:(CGFloat)arg0 andCompletion:(id)arg1 ;
-(void)fetchSuggestedCustodiansWithImagesOfSize:(CGFloat)arg0 andCompletion:(id)arg1 ;


@end


#endif