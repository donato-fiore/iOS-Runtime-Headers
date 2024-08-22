// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSSTASHEDAPPMETADATA_H
#define LSSTASHEDAPPMETADATA_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSStashedAppMetadata : NSObject <NSSecureCoding>

 {
    unsigned char _validationState;
}


@property (readonly, getter=isUPPValidated) BOOL UPPValidated;
@property (readonly) NSString *bundleShortVersion; // ivar: _bundleShortVersion
@property (readonly) NSDate *dateOriginallyInstalled; // ivar: _dateOriginallyInstalled
@property (readonly) NSDate *dateStashed; // ivar: _dateStashed
@property (readonly) NSString *exactBundleVersion; // ivar: _exactBundleVersion
@property (readonly, getter=isFreeProfileValidated) BOOL freeProfileValidated;
@property (readonly, getter=isProfileValidated) BOOL profileValidated;
@property (readonly) NSString *signerOrganization; // ivar: _signerOrganization


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(struct LSContext *)arg0 unitID:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif