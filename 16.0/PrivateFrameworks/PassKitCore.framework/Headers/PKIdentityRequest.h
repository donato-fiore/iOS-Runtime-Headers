// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIDENTITYREQUEST_H
#define PKIDENTITYREQUEST_H

@class NSString, NSData;
@protocol PKIdentityDocumentDescriptor;

#import <Foundation/Foundation.h>


@interface PKIdentityRequest : NSObject

@property (copy, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSObject<PKIdentityDocumentDescriptor> *descriptor; // ivar: _descriptor
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce


-(id)asDIIdentityRequest;
-(id)description;


@end


#endif