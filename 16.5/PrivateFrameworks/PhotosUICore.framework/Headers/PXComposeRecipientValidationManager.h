// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOMPOSERECIPIENTVALIDATIONMANAGER_H
#define PXCOMPOSERECIPIENTVALIDATIONMANAGER_H

@class NSMutableDictionary;
@protocol PXComposeRecipientValidationManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXIDSAddressQueryController.h"
#import "PXComposeRecipientDataSource.h"

@interface PXComposeRecipientValidationManager : NSObject {
    NSMutableDictionary *_composeRecipientsToQuery;
    NSMutableDictionary *_queryAddressesToComposeRecipientQuery;
    PXIDSAddressQueryController *_addressQueryController;
}


@property (readonly, nonatomic) PXComposeRecipientDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<PXComposeRecipientValidationManagerDelegate> *delegate; // ivar: _delegate


+(id)new;
-(NSInteger)validationTypeForComposeRecipient:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)_handleAddressQueryResults:(id)arg0 error:(id)arg1 ;
-(void)_requestValidationForComposeRecipientsAtIndexes:(id)arg0 ;


@end


#endif