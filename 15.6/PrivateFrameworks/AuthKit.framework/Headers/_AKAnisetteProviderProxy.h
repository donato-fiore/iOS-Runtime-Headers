// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AKANISETTEPROVIDERPROXY_H
#define _AKANISETTEPROVIDERPROXY_H

@class NSString;
@protocol AKAnisetteProvisioningClientProtocol, AKAnisetteServiceProtocol;

#import <Foundation/Foundation.h>


@interface _AKAnisetteProviderProxy : NSObject <AKAnisetteProvisioningClientProtocol>



@property (retain, nonatomic) NSObject<AKAnisetteServiceProtocol> *anisetteDataProvider; // ivar: _anisetteDataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProvider:(id)arg0 ;
-(void)eraseAnisetteForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchAnisetteDataForContext:(id)arg0 provisionIfNecessary:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)legacyAnisetteDataForContext:(id)arg0 DSID:(id)arg1 withCompletion:(id)arg2 ;
-(void)provisionAnisetteForContext:(id)arg0 withCompletion:(id)arg1 ;
-(void)syncAnisetteForContext:(id)arg0 withSIMData:(id)arg1 completion:(id)arg2 ;


@end


#endif