// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMLIGHTPROFILESETTINGS_H
#define HMLIGHTPROFILESETTINGS_H

@class NSArray, NSString;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMLightProfileSettings : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSUInteger supportedFeatures; // ivar: _supportedFeatures


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSupportedFeatures:(NSUInteger)arg0 naturalLightingEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif