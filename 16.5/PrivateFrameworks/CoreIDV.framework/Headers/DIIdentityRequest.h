// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIIDENTITYREQUEST_H
#define DIIDENTITYREQUEST_H

@class NSString, NSData;
@protocol DIIdentityDocumentDescriptor;

#import <Foundation/Foundation.h>


@interface DIIdentityRequest : NSObject

@property (copy) NSString *context; // ivar: _context
@property (retain) NSObject<DIIdentityDocumentDescriptor> *descriptor; // ivar: _descriptor
@property (copy) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy) NSData *nonce; // ivar: _nonce


-(id)initWithDescriptor:(id)arg0 nonce:(id)arg1 ;


@end


#endif