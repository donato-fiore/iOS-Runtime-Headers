// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOBJECTAUTHORIZATIONPROMPTSESSIONMETADATA_H
#define HKOBJECTAUTHORIZATIONPROMPTSESSIONMETADATA_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKObjectType.h"

@interface HKObjectAuthorizationPromptSessionMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKObjectType *expectedObjectType; // ivar: _expectedObjectType
@property (copy, nonatomic) NSArray *recordTypes; // ivar: _recordTypes


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpectedObjectType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif