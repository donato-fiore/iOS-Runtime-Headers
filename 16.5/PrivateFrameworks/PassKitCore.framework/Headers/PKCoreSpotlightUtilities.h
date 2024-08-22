// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCORESPOTLIGHTUTILITIES_H
#define PKCORESPOTLIGHTUTILITIES_H


#import <Foundation/Foundation.h>


@interface PKCoreSpotlightUtilities : NSObject



+(id)passUniqueIdentifierFromCardInformationSpotlightIdentifier:(id)arg0 ;
+(id)passUniqueIdentifierFromSpotlightIdentifier:(id)arg0 ;
+(id)spotlightIdentifierForCardInformationUniqueIdentifier:(id)arg0 ;
+(id)spotlightIdentifierForPassUniqueIdentifier:(id)arg0 ;
+(id)spotlightIdentifierForTransactionIdentifier:(id)arg0 ;
+(id)transactionIdentifierFromSpotlightIdentifier:(id)arg0 ;
+(struct CGSize )_thumbnailImageSizeForSourceImageSize:(struct CGSize )arg0 ;
+(void)searchableItemForCardNumberFromPass:(id)arg0 completion:(id)arg1 ;
+(void)searchableItemForPass:(id)arg0 completion:(id)arg1 ;
+(void)searchableItemForTransaction:(id)arg0 passUniqueIdentifier:(id)arg1 regions:(id)arg2 tags:(id)arg3 keywords:(id)arg4 imageGenerator:(id)arg5 contactResolver:(id)arg6 completion:(id)arg7 ;


@end


#endif