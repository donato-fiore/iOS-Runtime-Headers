// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOMEPERSONMANAGERSETTINGS_H
#define HMHOMEPERSONMANAGERSETTINGS_H

@class NSArray, NSString;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMHomePersonManagerSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled; // ivar: _faceClassificationEnabled
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif