// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDREMOTESECRETVALIDATIONRESULT_H
#define CDPDREMOTESECRETVALIDATIONRESULT_H

@class CDPDevice, OTClique, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CDPDRemoteSecretValidationResult : NSObject

@property (copy, nonatomic) CDPDevice *device; // ivar: _device
@property (retain, nonatomic) OTClique *recoveredClique; // ivar: _recoveredClique
@property (copy, nonatomic) NSDictionary *recoveredInfo; // ivar: _recoveredInfo
@property (nonatomic) NSUInteger secretType; // ivar: _secretType
@property (nonatomic) BOOL userDidCancel; // ivar: _userDidCancel
@property (nonatomic) BOOL userDidReset; // ivar: _userDidReset
@property (copy, nonatomic) NSString *validSecret; // ivar: _validSecret




@end


#endif