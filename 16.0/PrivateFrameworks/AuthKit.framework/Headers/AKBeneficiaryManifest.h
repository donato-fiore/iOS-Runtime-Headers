// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKBENEFICIARYMANIFEST_H
#define AKBENEFICIARYMANIFEST_H

@class NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKBeneficiaryManifest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *accessibleBundleInformation; // ivar: _accessibleBundleInformation
@property (readonly, nonatomic) NSInteger manifestOptions; // ivar: _manifestOptions
@property (readonly, nonatomic) NSDictionary *parsableRepresentation;


+(BOOL)supportsSecureCoding;
-(BOOL)_isAllOptionsSelected;
-(id)_bundleTypeFrom:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleInformation:(id)arg0 manifestOptions:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif