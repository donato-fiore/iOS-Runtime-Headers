// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDREDACTEDFHIRRESOURCEOBJECT_H
#define HDREDACTEDFHIRRESOURCEOBJECT_H

@class NSString;


#import "HDFHIRJSONObject.h"

@interface HDRedactedFHIRResourceObject : HDFHIRJSONObject

@property (readonly, copy, nonatomic) NSString *resourceType; // ivar: _resourceType


+(BOOL)supportsSecureCoding;
+(id)resourceObjectWithFHIRJSONObject:(id)arg0 redactedJSONObject:(id)arg1 error:(*id)arg2 ;
-(id)_initWithResourceType:(id)arg0 sourceURL:(id)arg1 FHIRVersion:(id)arg2 JSONObject:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif