// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMPLATFORMUTILS_H
#define CDMPLATFORMUTILS_H


#import <Foundation/Foundation.h>


@interface CDMPlatformUtils : NSObject



+(BOOL)isInternalInstall;
+(id)normalizeLocaleIdentifier:(id)arg0 ;
+(id)normalizedAssistantLocaleIdentifier;
+(id)prettyPrintError:(id)arg0 ;
+(id)prettyPrintJson:(id)arg0 ;


@end


#endif