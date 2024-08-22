// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STS18013READERAUTHINFO_H
#define STS18013READERAUTHINFO_H

@class NSData, NSString, NSURL, NSNumber;

#import <Foundation/Foundation.h>


@interface STS18013ReaderAuthInfo : NSObject

@property (readonly, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (readonly, nonatomic) NSData *iconData; // ivar: _iconData
@property (readonly, nonatomic) NSString *iconMediaType; // ivar: _iconMediaType
@property (readonly, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *merchantCategoryCode; // ivar: _merchantCategoryCode
@property (readonly, nonatomic) NSString *organization; // ivar: _organization
@property (readonly, nonatomic) NSString *organizationUnit; // ivar: _organizationUnit
@property (readonly, nonatomic) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL


-(id)description;
-(id)initWithIdentifier:(id)arg0 organization:(id)arg1 organizationUnit:(id)arg2 iconData:(id)arg3 iconURL:(id)arg4 iconMediaType:(id)arg5 privacyPolicyURL:(id)arg6 merchantCategoryCode:(id)arg7 certificateData:(id)arg8 ;


@end


#endif