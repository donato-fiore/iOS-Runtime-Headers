// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISO18013READERAUTHINFO_H
#define ISO18013READERAUTHINFO_H

@class NSString, NSData, NSURL, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ISO18013ReaderAuthInfo : NSObject <NSSecureCoding>

 {
    NSString *_identifier;
    NSString *_organization;
    NSString *_organizationUnit;
    NSData *_iconData;
    NSURL *_iconURL;
    NSString *_iconMediaType;
    NSURL *_privacyPolicyURL;
    NSNumber *_merchantCategoryCode;
    NSData *_certificateData;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif