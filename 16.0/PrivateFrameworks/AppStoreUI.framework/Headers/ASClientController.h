// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCLIENTCONTROLLER_H
#define ASCLIENTCONTROLLER_H

@class SUClientController;



@interface ASClientController : SUClientController

@property (nonatomic) BOOL shouldExitAfterPurchases; // ivar: _shouldExitAfterPurchases


-(BOOL)libraryContainsItemIdentifier:(NSUInteger)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)initWithClientInterface:(id)arg0 ;
-(id)purchaseManager:(id)arg0 purchaseBatchForItems:(id)arg1 ;
-(id)purchaseManager:(id)arg0 purchaseBatchForPurchases:(id)arg1 ;


@end


#endif