// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKTOKENKEYCHAINITEM_H
#define HKTOKENKEYCHAINITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKTokenKeychainItem : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)_deleteTokenIdentifiedByName:(id)arg0 error:(*id)arg1 ;
+(BOOL)_storeTokenIdentifiedByName:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
+(id)_fetchTokenIdentifiedByName:(id)arg0 error:(*id)arg1 ;
+(id)_identifyingAttributesForKeyIdentifiedByName:(id)arg0 ;
+(id)_keyQueryAttributesForKeyIdentifiedByName:(id)arg0 ;
+(id)_storableAttributesForKeyIdentifiedByName:(id)arg0 data:(id)arg1 modificationDate:(id)arg2 ;
+(id)tokenKeychainItemSecurityClass;
-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)storeToken:(id)arg0 error:(*id)arg1 ;
-(id)fetchWithError:(*id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif