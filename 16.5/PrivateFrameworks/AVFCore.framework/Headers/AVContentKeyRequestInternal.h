// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONTENTKEYREQUESTINTERNAL_H
#define AVCONTENTKEYREQUESTINTERNAL_H

@class NSData, NSDictionary, NSError, NSString;

#import <Foundation/Foundation.h>

#import "AVContentKeySession.h"
#import "AVContentKeyReportGroup.h"
#import "AVContentKeySpecifier.h"
#import "AVContentKey.h"

@interface AVContentKeyRequestInternal : NSObject {
    AVContentKeySession *weakSession;
    AVContentKeyReportGroup *reportGroup;
    id *identifier;
    NSData *keyIDFromInitializationData;
    NSData *initializationData;
    NSInteger status;
    int responseParamsSent;
    BOOL providesPersistableKey;
    NSDictionary *preloadingRequestOptions;
    *OpaqueFigCPECryptor figCryptor;
    NSError *error;
    *__CFDictionary requestInfo;
    NSUInteger customURLRequestID;
    *OpaqueFigCustomURLHandler customURLHandler;
    BOOL isRenewalRequest;
    NSString *cryptorUUID;
    NSUInteger cryptorKeyRequestID;
    BOOL isInchargeOfKeyRequest;
    *OpaqueFigSimpleMutex stateMutex;
    BOOL hasAnyKeyRequestSucceeded;
    AVContentKeySpecifier *contentKeySpecifier;
    AVContentKey *contentKey;
    NSData *contentIdentifier;
    *OpaqueFigCFWeakReferenceHolder weakContentKeyBoss;
    BOOL useContentKeyBoss;
    NSInteger requestID;
    *FigContentKeySpecifier keySpecifier;
}






@end


#endif