// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BDSJALISCODAAPCLIENT_H
#define BDSJALISCODAAPCLIENT_H

@class NSString;
@protocol BDSJaliscoDAAPClientService;

#import <Foundation/Foundation.h>

#import "BDSServiceProxy.h"

@interface BDSJaliscoDAAPClient : NSObject <BDSJaliscoDAAPClientService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL familyUpdateInProgress; // ivar: _familyUpdateInProgress
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


+(id)sharedClient;
-(id)init;
-(void)deleteItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)hideItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)setItemHidden:(BOOL)arg0 forStoreID:(id)arg1 completion:(id)arg2 ;
-(void)updateFamilyPolitely:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updatePolitely:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif