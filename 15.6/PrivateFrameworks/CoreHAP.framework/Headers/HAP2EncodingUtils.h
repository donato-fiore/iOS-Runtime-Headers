// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ENCODINGUTILS_H
#define HAP2ENCODINGUTILS_H


#import <Foundation/Foundation.h>


@interface HAP2EncodingUtils : NSObject



+(BOOL)parseAddOrRemovePairingRequestResponse:(id)arg0 error:(*id)arg1 ;
+(id)addPairingRequestWithIdentity:(id)arg0 error:(*id)arg1 ;
+(id)removePairingRequestWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif