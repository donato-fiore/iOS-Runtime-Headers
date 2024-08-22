// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDSESSION_H
#define CDSESSION_H

@class CDDClientConnection;

#import <Foundation/Foundation.h>


@interface CDSession : NSObject

@property (readonly) CDDClientConnection *cddClientConnection; // ivar: _cddClientConnection
@property (readonly) NSUInteger clientId; // ivar: _clientId
@property BOOL unlocked; // ivar: _unlocked


+(id)sharedSessionWithClientId:(NSUInteger)arg0 ;
-(BOOL)broadcastSystemDataWithError:(*id)arg0 ;
-(BOOL)deleteClientDataWithError:(*id)arg0 ;
-(BOOL)isClassCLocked;
-(BOOL)registerForDeviceChanges;
-(BOOL)setActiveComplications:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDevicesChangedHandlerWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)setGlancesLingeredOn:(id)arg0 error:(*id)arg1 ;
-(BOOL)setNonAppBundlIdWithError:(id)arg0 error:(*id)arg1 ;
-(BOOL)setNonAppBundleIdWithError:(id)arg0 error:(*id)arg1 ;
-(id)attributeComponentsFromRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)attributeExtendedComponentsFromRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)attributeForName:(id)arg0 type:(NSInteger)arg1 clientId:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)attributeForName:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(id)attributeFromFullname:(id)arg0 error:(*id)arg1 ;
-(id)attributeFromRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)attributeNamesWithError:(*id)arg0 ;
-(id)budgetForName:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(id)budgetNamesWithError:(*id)arg0 ;
-(id)copyDevicesUncached;
-(id)description;
-(id)getDeviceFromDescription:(id)arg0 error:(*id)arg1 ;
-(id)getDevices;
-(id)getDevicesInternal;
-(id)init;
-(id)initWithClientId:(NSUInteger)arg0 ;
-(id)initWithClientId:(NSUInteger)arg0 enableCaching:(BOOL)arg1 ;
-(id)registerAttributeWithName:(id)arg0 type:(NSInteger)arg1 dataProtectionClass:(id)arg2 error:(*id)arg3 ;
-(id)registerBudgetWithName:(id)arg0 value:(NSInteger)arg1 type:(NSInteger)arg2 error:(*id)arg3 ;
-(id)registerBudgetWithName:(id)arg0 value:(NSInteger)arg1 type:(NSInteger)arg2 withOptions:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)representationStringFromAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)representationStringFromAttribute:(id)arg0 value:(id)arg1 options:(id)arg2 error:(*id)arg3 ;


@end


#endif