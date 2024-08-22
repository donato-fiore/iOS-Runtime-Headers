// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRUTILS_H
#define CRUTILS_H


#import <Foundation/Foundation.h>


@interface CRUtils : NSObject



+(id)getInnermostNSError:(id)arg0 ;
+(int)getInnermostNSErrorCode:(id)arg0 ;
-(BOOL)currentProcessHasEntitlement:(id)arg0 ;
-(BOOL)hasEntitlementBoolForTag:(unsigned int)arg0 inAPTicket:(id)arg1 ;
-(BOOL)isHorizonRamdiskBootInApticket:(id)arg0 ;
-(id)convertDataToHexInDictionary:(id)arg0 ;
-(id)getAPTicket;
-(id)getPathForApTicketWithError:(*id)arg0 ;


@end


#endif