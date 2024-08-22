// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INSIRIAUTHORIZATIONMANAGER_H
#define _INSIRIAUTHORIZATIONMANAGER_H

@class NSString;
@protocol _INSiriAuthorizationManagerExport;

#import <Foundation/Foundation.h>


@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSiriAuthorizationRestricted;
+(BOOL)_siriEnabled;
+(NSInteger)_rawSiriAuthorizationStatusForAppID:(id)arg0 ;
+(NSInteger)_siriAuthorizationStatusForAppID:(id)arg0 ;
+(id)_tccAccessInfoForBundle:(id)arg0 ;
// +(void)_requestSiriAuthorization:(id)arg0 auditToken:(unk)arg1  ;


@end


#endif