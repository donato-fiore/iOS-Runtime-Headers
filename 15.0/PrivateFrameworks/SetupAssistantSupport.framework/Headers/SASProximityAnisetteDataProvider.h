// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPROXIMITYANISETTEDATAPROVIDER_H
#define SASPROXIMITYANISETTEDATAPROVIDER_H

@class NSString;
@protocol NSCopying, AKAnisetteServiceProtocol;

#import <Foundation/Foundation.h>

#import "SASProximitySession.h"

@interface SASProximityAnisetteDataProvider : NSObject <NSCopying, AKAnisetteServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SASProximitySession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)eraseAnisetteWithCompletion:(id)arg0 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg0 withCompletion:(id)arg1 ;
-(void)provisionAnisetteWithCompletion:(id)arg0 ;
-(void)syncAnisetteWithSIMData:(id)arg0 completion:(id)arg1 ;


@end


#endif