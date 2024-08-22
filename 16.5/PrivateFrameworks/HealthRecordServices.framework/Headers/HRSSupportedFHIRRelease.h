// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRSSUPPORTEDFHIRRELEASE_H
#define HRSSUPPORTEDFHIRRELEASE_H

@class NSString, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HRSSupportedFHIRRelease : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *FHIRRelease; // ivar: _FHIRRelease
@property (readonly, copy, nonatomic) NSSet *resourceTypes; // ivar: _resourceTypes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFHIRRelease:(id)arg0 resourceTypes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif