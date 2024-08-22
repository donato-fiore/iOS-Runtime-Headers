// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFHIRRESOURCEOBJECT_H
#define HDFHIRRESOURCEOBJECT_H

@class HKFHIRIdentifier, NSDate, NSURL;


#import "HDFHIRJSONObject.h"

@interface HDFHIRResourceObject : HDFHIRJSONObject

@property (readonly, nonatomic) NSUInteger extractionHints; // ivar: _extractionHints
@property (readonly, copy, nonatomic) HKFHIRIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *receivedDate; // ivar: _receivedDate
@property (readonly, copy, nonatomic) NSURL *serverBaseURL;


+(BOOL)supportsSecureCoding;
+(id)hrs_sampleResourceObjectWithFHIRResource:(id)arg0 ;
+(id)hrs_sampleResourceObjectWithFHIRResource:(id)arg0 error:(*id)arg1 ;
+(id)identifierDetectedInJSONObject:(id)arg0 error:(*id)arg1 ;
+(id)identifierWithStaticIdentifier:(id)arg0 JSONObject:(id)arg1 error:(*id)arg2 ;
+(id)resourceObjectWithJSONObject:(id)arg0 serverBaseURL:(id)arg1 FHIRVersion:(id)arg2 receivedDate:(id)arg3 error:(*id)arg4 ;
+(id)resourceObjectWithJSONObject:(id)arg0 sourceURL:(id)arg1 FHIRVersion:(id)arg2 receivedDate:(id)arg3 extractionHints:(NSUInteger)arg4 error:(*id)arg5 ;
+(id)resourceObjectWithResourceData:(id)arg0 receivedDate:(id)arg1 extractionHints:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithResourceIdentifier:(id)arg0 JSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(NSUInteger)arg5 ;
-(id)copyWithOriginDataFrom:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif