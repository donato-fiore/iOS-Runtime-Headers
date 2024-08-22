// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WAUTIL_H
#define WAUTIL_H


#import <Foundation/Foundation.h>


@interface WAUtil : NSObject



+(BOOL)storeToken:(id)arg0 withIdentifier:(id)arg1 ;
+(NSUInteger)getAWDTimestamp;
+(id)_generateInvocationForMethod:(*void)arg0 ;
+(id)_getBasePersistenceKeychainQuery;
+(id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg0 ;
+(id)deviceName;
+(id)getCopyOfMessage:(id)arg0 withNumericalValuesSubstractedByValuesInMessage:(id)arg1 ;
+(id)getMessageInstanceForKey:(id)arg0 andGroupType:(NSInteger)arg1 ;
+(id)getObscureKey;
+(id)getTokenForIdentifier:(id)arg0 ;
+(id)getValueForEntitlementForCurrentProcess:(id)arg0 ;
+(id)groupTypeToAWDComponentID;
+(id)groupTypeToString:(NSInteger)arg0 ;
+(id)rotateObscureKey;
+(id)rotateUUIDsForMessage:(id)arg0 ;
+(id)trimTokenForLogging:(id)arg0 ;
+(id)unobscureModelData:(id)arg0 forModelkey:(id)arg1 ;


@end


#endif