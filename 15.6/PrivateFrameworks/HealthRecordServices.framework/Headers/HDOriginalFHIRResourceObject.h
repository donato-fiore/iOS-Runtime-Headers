// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDORIGINALFHIRRESOURCEOBJECT_H
#define HDORIGINALFHIRRESOURCEOBJECT_H

@class NSString, NSDate;


#import "HDFHIRResourceObject.h"
#import "HDHRSOriginInformation.h"

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject

@property (readonly, copy, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy, nonatomic) NSDate *firstSeenDate; // ivar: _firstSeenDate
@property (readonly, copy, nonatomic) HDHRSOriginInformation *originInformation; // ivar: _originInformation


+(BOOL)supportsSecureCoding;
+(id)resourceObjectWithData:(id)arg0 sourceURL:(id)arg1 FHIRVersion:(id)arg2 receivedDate:(id)arg3 firstSeenDate:(id)arg4 extractionHints:(NSUInteger)arg5 originVersion:(struct ? )arg6 originBuild:(id)arg7 country:(id)arg8 error:(*id)arg9 ;
+(id)resourceObjectWithStaticIdentifier:(id)arg0 data:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 firstSeenDate:(id)arg5 extractionHints:(NSUInteger)arg6 originVersion:(struct ? )arg7 originBuild:(id)arg8 country:(id)arg9 error:(*id)arg10 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithResourceIdentifier:(id)arg0 JSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 firstSeenDate:(id)arg5 extractionHints:(NSUInteger)arg6 originInformation:(id)arg7 country:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif