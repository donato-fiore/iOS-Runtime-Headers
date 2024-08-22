// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISO18013READERAUTHINFO_H
#define ISO18013READERAUTHINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ISO18013ReaderAuthInfo : NSObject <NSSecureCoding>

 {
    NSString *_identifier;
    NSString *_organization;
    NSString *_organizationUnit;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif