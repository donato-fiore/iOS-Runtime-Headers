// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCPRESENTMENTPROPOSAL_H
#define DCPRESENTMENTPROPOSAL_H

@class NSData, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentProposal : NSObject <NSSecureCoding>



@property (retain) NSData *authACL; // ivar: _authACL
@property (retain) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain) NSString *docType; // ivar: _docType
@property (retain) NSDictionary *elements; // ivar: _elements
@property (retain) NSString *partition; // ivar: _partition
@property (retain) NSString *readerIdentifier; // ivar: _readerIdentifier
@property (retain) NSString *readerOrganization; // ivar: _readerOrganization
@property (retain) NSString *readerOrganizationalUnit; // ivar: _readerOrganizationalUnit


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialIdentifier:(id)arg0 partition:(id)arg1 docType:(id)arg2 elements:(id)arg3 authACL:(id)arg4 ;
-(id)initWithCredentialIdentifier:(id)arg0 partition:(id)arg1 docType:(id)arg2 elements:(id)arg3 authACL:(id)arg4 readerIdentifier:(id)arg5 readerOrganization:(id)arg6 readerOrganizationalUnit:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif