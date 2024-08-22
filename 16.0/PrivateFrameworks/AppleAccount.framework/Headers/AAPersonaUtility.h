// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAPERSONAUTILITY_H
#define AAPERSONAUTILITY_H


#import <Foundation/Foundation.h>


@interface AAPersonaUtility : NSObject



+(BOOL)isDataSeparatedAccount:(id)arg0 ;
+(BOOL)personaConsistencyCheck:(id)arg0 ;
+(id)findEnterprisePersonaIdentifier;
+(void)verifyAndFixPersonaIfNeeded:(id)arg0 desiredContext:(id)arg1 ;


@end


#endif