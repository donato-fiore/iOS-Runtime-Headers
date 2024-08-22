// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCPRESENTMENTPROPOSALREADERMETADATA_H
#define DCPRESENTMENTPROPOSALREADERMETADATA_H

@class NSDictionary, NSData, NSString, NSURL, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentProposalReaderMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) NSString *iconMediaType; // ivar: _iconMediaType
@property (readonly, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *merchantCategoryCode; // ivar: _merchantCategoryCode
@property (readonly, nonatomic) NSString *organization; // ivar: _organization
@property (readonly, nonatomic) NSString *organizationalUnit; // ivar: _organizationalUnit
@property (readonly, nonatomic) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 organization:(id)arg1 organizationalUnit:(id)arg2 iconData:(id)arg3 iconURL:(id)arg4 iconMediaType:(id)arg5 privacyPolicyURL:(id)arg6 merchantCategoryCode:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif