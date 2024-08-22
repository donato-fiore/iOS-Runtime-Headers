// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCARKEYCREDENTIALREGISTRATIONMETADATA_H
#define PKCARKEYCREDENTIALREGISTRATIONMETADATA_H

@class NSString;


#import "PKCredentialRegistrationMetadata.h"

@interface PKCarKeyCredentialRegistrationMetadata : PKCredentialRegistrationMetadata

@property (readonly, nonatomic) NSInteger keyType; // ivar: _keyType
@property (readonly, nonatomic) NSString *make; // ivar: _make
@property (readonly, nonatomic) NSString *model; // ivar: _model


-(id)initWithMake:(id)arg0 model:(id)arg1 keyType:(NSInteger)arg2 ;


@end


#endif