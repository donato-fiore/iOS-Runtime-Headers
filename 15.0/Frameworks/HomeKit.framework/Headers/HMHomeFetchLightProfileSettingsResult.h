// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOMEFETCHLIGHTPROFILESETTINGSRESULT_H
#define HMHOMEFETCHLIGHTPROFILESETTINGSRESULT_H

@class NSError;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HMLightProfileSettings.h"

@interface HMHomeFetchLightProfileSettingsResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSError *error; // ivar: _error
@property (readonly, copy) HMLightProfileSettings *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif