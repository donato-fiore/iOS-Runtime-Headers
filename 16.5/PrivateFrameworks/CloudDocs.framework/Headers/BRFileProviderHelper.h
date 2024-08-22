// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRFILEPROVIDERHELPER_H
#define BRFILEPROVIDERHELPER_H


#import <Foundation/Foundation.h>


@interface BRFileProviderHelper : NSObject



+(id)_br_getDomainIdentifierForAccountDescriptor:(id)arg0 ;
+(id)br_getDomainIdentifierForACAccountID:(id)arg0 ;
+(id)br_getDomainIdentifierForCurrentPersona;
+(id)br_getDomainIdentifierForDataSeparated:(BOOL)arg0 ;
+(id)br_getProviderDomainIDForCurrentPersona;
+(id)br_getProviderDomainIDForDataSeparated:(BOOL)arg0 ;
+(id)br_getProviderIDForCurrentPersona;
+(id)br_getProviderIDForDataSeparated:(BOOL)arg0 ;


@end


#endif