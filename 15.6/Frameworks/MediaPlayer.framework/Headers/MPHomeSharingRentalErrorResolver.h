// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPHOMESHARINGRENTALERRORRESOLVER_H
#define MPHOMESHARINGRENTALERRORRESOLVER_H

@class NSError, SSRentalCheckoutRequest, NSString;
@protocol SSRequestDelegate;


#import "MPAVErrorResolver.h"
#import "MPHomeSharingML3DataProvider.h"

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate>

 {
    NSUInteger _accountID;
    NSError *_error;
    NSUInteger _homeSharingID;
    NSUInteger _rentalID;
    SSRentalCheckoutRequest *_request;
}


@property (retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemID; // ivar: _itemID
@property (readonly) Class superclass;


-(BOOL)_errorIsFairPlayError:(id)arg0 ;
-(id)initWithItemID:(NSUInteger)arg0 homeSharingID:(NSUInteger)arg1 rentalID:(NSUInteger)arg2 accountID:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestDidFinish:(id)arg0 ;
-(void)resolveError:(id)arg0 ;


@end


#endif