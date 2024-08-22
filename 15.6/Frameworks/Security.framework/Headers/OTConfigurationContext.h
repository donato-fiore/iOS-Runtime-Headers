// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OTCONFIGURATIONCONTEXT_H
#define OTCONFIGURATIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKKSControl.h"
#import "OTControl.h"

@interface OTConfigurationContext : NSObject

@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *authenticationAppleID; // ivar: _authenticationAppleID
@property (retain) CKKSControl *ckksControl; // ivar: _ckksControl
@property (copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (copy, nonatomic) NSString *context; // ivar: _context
@property (copy, nonatomic) NSString *dsid; // ivar: _dsid
@property (retain) OTControl *otControl; // ivar: _otControl
@property (nonatomic) BOOL overrideEscrowCache; // ivar: _overrideEscrowCache
@property (copy, nonatomic) NSString *passwordEquivalentToken; // ivar: _passwordEquivalentToken
@property (retain) id *sbd; // ivar: _sbd


-(id)init;
-(id)makeCKKSControl:(*id)arg0 ;
-(id)makeOTControl:(*id)arg0 ;


@end


#endif