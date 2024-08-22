// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAKEYSTOREBACKENDQUERYBUILDER_H
#define LAKEYSTOREBACKENDQUERYBUILDER_H


#import <Foundation/Foundation.h>


@interface LAKeyStoreBackendQueryBuilder : NSObject



-(id)createQueryForGenericPasswordWithIdentifier:(id)arg0 domain:(id)arg1 data:(id)arg2 protectedBy:(id)arg3 ;
-(id)createQueryForKeyWithIdentifier:(id)arg0 domain:(id)arg1 acl:(id)arg2 ;
-(id)fetchQueryForGenericPasswordWithIdentifier:(id)arg0 domain:(id)arg1 ;
-(id)fetchQueryForGenericPasswordsWithDomain:(id)arg0 ;
-(id)fetchQueryForKeyWithIdentifier:(id)arg0 domain:(id)arg1 ;
-(id)fetchQueryForKeyWithPublicKeyHash:(id)arg0 ;
-(id)fetchQueryForKeysWithDomain:(id)arg0 ;
-(id)removeQueryForGenericPasswords;
-(id)removeQueryForGenericPasswordsWithDomain:(id)arg0 ;
-(id)removeQueryForKeys;
-(id)removeQueryForKeysWithDomain:(id)arg0 ;


@end


#endif