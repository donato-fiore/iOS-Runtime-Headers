// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFHIRRESOURCEDOWNLOADREQUEST_H
#define HKFHIRRESOURCEDOWNLOADREQUEST_H

@class NSURL, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKClinicalIngestionContext.h"

@interface HKFHIRResourceDownloadRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKClinicalIngestionContext *context; // ivar: _context
@property (readonly, copy, nonatomic) NSURL *fullRequestURL; // ivar: _fullRequestURL
@property (readonly, copy, nonatomic) NSDictionary *resourceSchemaDefinition; // ivar: _resourceSchemaDefinition
@property (readonly, copy, nonatomic) NSString *resourceType; // ivar: _resourceType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResourceType:(id)arg0 resourceSchemaDefinition:(id)arg1 fullRequestURL:(id)arg2 context:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif