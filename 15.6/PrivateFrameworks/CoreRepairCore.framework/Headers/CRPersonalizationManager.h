// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRPERSONALIZATIONMANAGER_H
#define CRPERSONALIZATIONMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CRPersonalizationManager : NSObject {
    NSDictionary *personalizationMap;
    *__AMAuthInstall amai;
}




+(BOOL)IsTatsuErrorNetworkingRelated:(NSInteger)arg0 ;
+(id)defaultManager;
+(id)initWithAuthInstallObj:(struct __AMAuthInstall *)arg0 ;
+(struct __AMAuthInstall *)createBaseAMAIObject;
+(struct __AMAuthInstall *)getDefaultAMAuthInstallRef;
-(BOOL)_personalizeWithElement:(id)arg0 useCache:(BOOL)arg1 parsedResponseData:(*id)arg2 error:(*id)arg3 ;
-(BOOL)addCustomPersonalizationElementWithId:(id)arg0 personalizationElement:(id)arg1 error:(*id)arg2 ;
-(BOOL)getApTicketForLthTransferWithOptions:(id)arg0 apTicketData:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getApTicketForMesaPairing:(*id)arg0 error:(*id)arg1 ;
-(BOOL)getBMUTicketForVeridianFWUpdateWithOptions:(id)arg0 BMUTicket:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getPDIAPTicketUsingCache:(BOOL)arg0 apTicketData:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getRemoteTrustObjectDigestUsingCache:(BOOL)arg0 digestData:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getSavageTicketForSavageFWUpdateWithOptions:(id)arg0 SavageTicket:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getYonkersTicketForYonkersFWUpdateWithOptions:(id)arg0 YonkersTicket:(*id)arg1 error:(*id)arg2 ;
-(BOOL)personalizeWithElements:(id)arg0 error:(*id)arg1 ;
-(id)_init:(struct __AMAuthInstall *)arg0 ;
-(id)init;


@end


#endif