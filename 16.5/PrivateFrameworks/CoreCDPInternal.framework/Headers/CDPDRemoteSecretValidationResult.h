// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDREMOTESECRETVALIDATIONRESULT_H
#define CDPDREMOTESECRETVALIDATIONRESULT_H

@class CDPLocalSecret, CDPDevice, OTClique, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CDPDRemoteSecretValidationResult : NSObject

@property (copy, nonatomic) CDPLocalSecret *cachedSecretForReenrollment; // ivar: _cachedSecretForReenrollment
@property (copy, nonatomic) CDPDevice *device; // ivar: _device
@property (retain, nonatomic) OTClique *recoveredClique; // ivar: _recoveredClique
@property (copy, nonatomic) NSDictionary *recoveredInfo; // ivar: _recoveredInfo
@property (nonatomic) NSUInteger secretType; // ivar: _secretType
@property (nonatomic) BOOL userDidCancel; // ivar: _userDidCancel
@property (nonatomic) BOOL userDidReset; // ivar: _userDidReset
@property (copy, nonatomic) NSString *validSecret; // ivar: _validSecret




@end


#endif