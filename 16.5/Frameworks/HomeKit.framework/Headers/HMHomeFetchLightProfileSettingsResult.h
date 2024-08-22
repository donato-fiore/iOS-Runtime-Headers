// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMHOMEFETCHLIGHTPROFILESETTINGSRESULT_H
#define HMHOMEFETCHLIGHTPROFILESETTINGSRESULT_H

@class NSArray, NSString, NSError;
@protocol HMFObject, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HMLightProfileSettings.h"

@interface HMHomeFetchLightProfileSettingsResult : NSObject <HMFObject, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) HMLightProfileSettings *settings; // ivar: _settings
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif