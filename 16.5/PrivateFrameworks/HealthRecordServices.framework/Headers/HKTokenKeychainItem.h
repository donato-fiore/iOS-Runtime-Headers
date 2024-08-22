// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTOKENKEYCHAINITEM_H
#define HKTOKENKEYCHAINITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKTokenKeychainItem : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)_addTokenIdentifiedByName:(id)arg0 data:(id)arg1 synchronizable:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)_deleteTokenIdentifiedByName:(id)arg0 error:(*id)arg1 ;
+(BOOL)_isTokenPresentIdentifiedByName:(id)arg0 error:(*id)arg1 ;
+(BOOL)_makeTokenSynchronizableIfNeededIdentifiedByName:(id)arg0 error:(*id)arg1 ;
+(BOOL)_storeTokenIdentifiedByName:(id)arg0 data:(id)arg1 synchronizable:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)_updateTokenIdentifiedByName:(id)arg0 data:(id)arg1 synchronizable:(BOOL)arg2 error:(*id)arg3 ;
+(id)_fetchTokenIdentifiedByName:(id)arg0 error:(*id)arg1 ;
+(id)_identifyingAttributesForKeyIdentifiedByName:(id)arg0 ;
+(id)_keyQueryAttributesForKeyIdentifiedByName:(id)arg0 ;
+(id)_storableAttributesForKeyIdentifiedByName:(id)arg0 data:(id)arg1 modificationDate:(id)arg2 synchronizable:(BOOL)arg3 ;
+(id)tokenKeychainItemSecurityClass;
-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)isPresentWithError:(*id)arg0 ;
-(BOOL)makeTokenSynchronizableIfNeededWithError:(*id)arg0 ;
-(BOOL)storeLocalToken:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeSynchronizableToken:(id)arg0 error:(*id)arg1 ;
-(id)fetchWithError:(*id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif