// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFHIRRESOURCE_H
#define HKFHIRRESOURCE_H

@class NSString, NSData, NSURL, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKFHIRVersion.h"

@interface HKFHIRResource : NSObject <NSSecureCoding, NSCopying>

 {
    HKFHIRVersion *_FHIRVersion;
    NSString *_resourceType;
    NSString *_identifier;
    NSData *_data;
    NSURL *_sourceURL;
    NSDate *_lastUpdatedDate;
}


@property (readonly, copy) HKFHIRVersion *FHIRVersion;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSDate *lastUpdatedDate;
@property (readonly, copy) NSString *resourceType;
@property (readonly, copy) NSString *sourceString;
@property (readonly, copy) NSURL *sourceURL;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResourceType:(id)arg0 identifier:(id)arg1 FHIRVersion:(id)arg2 data:(id)arg3 sourceURL:(id)arg4 lastUpdatedDate:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif