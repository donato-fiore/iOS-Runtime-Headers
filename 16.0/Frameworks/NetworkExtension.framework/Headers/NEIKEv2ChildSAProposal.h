// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2CHILDSAPROPOSAL_H
#define NEIKEV2CHILDSAPROPOSAL_H

@class NSArray;
@protocol NEPrettyDescription, NSCopying;

#import <Foundation/Foundation.h>

#import "NEIKEv2ESPSPI.h"
#import "NEIKEv2EncryptionProtocol.h"
#import "NEIKEv2IntegrityProtocol.h"
#import "NEIKEv2DHProtocol.h"

@interface NEIKEv2ChildSAProposal : NSObject <NEPrettyDescription, NSCopying>

 {
    unsigned char _proposalNumber;
    NEIKEv2ESPSPI *_spi;
    NEIKEv2ESPSPI *_remoteSPI;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
}


@property (retain) NSArray *dhProtocols; // ivar: _dhProtocols
@property (retain) NSArray *encryptionProtocols; // ivar: _encryptionProtocols
@property (retain) NSArray *integrityProtocols; // ivar: _integrityProtocols
@property NSUInteger lifetimeSeconds; // ivar: _lifetimeSeconds
@property BOOL opportunisticPFS; // ivar: _opportunisticPFS
@property NSUInteger protocol; // ivar: _protocol


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif