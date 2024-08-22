// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFTRUSTKEYREQUEST_H
#define NFTRUSTKEYREQUEST_H

@class NSNumber, NSData, NSArray;


#import "NFTrustObject.h"

@interface NFTrustKeyRequest : NFTrustObject

@property (retain, nonatomic) NSNumber *counterLimit; // ivar: _counterLimit
@property (retain, nonatomic) NSData *discretionaryData; // ivar: _discretionaryData
@property (retain, nonatomic) NSArray *localValidations; // ivar: _localValidations
@property (retain, nonatomic) NSData *subjectIdentifier; // ivar: _subjectIdentifier


+(BOOL)supportsSecureCoding;
+(id)keyRequestWithSubjectIdentifier:(id)arg0 discretionaryData:(id)arg1 localValidations:(id)arg2 counterLimit:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif