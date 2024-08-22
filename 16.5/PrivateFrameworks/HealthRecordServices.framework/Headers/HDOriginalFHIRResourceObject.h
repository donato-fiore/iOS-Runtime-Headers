// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDORIGINALFHIRRESOURCEOBJECT_H
#define HDORIGINALFHIRRESOURCEOBJECT_H

@class NSData, NSString, NSNumber, NSDate;


#import "HDFHIRResourceObject.h"
#import "HDHRSOriginInformation.h"

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject {
    NSData *_staticUniquenessChecksum;
}


@property (readonly, copy, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy, nonatomic) NSNumber *existingRowID; // ivar: _existingRowID
@property (readonly, copy, nonatomic) NSDate *firstSeenDate; // ivar: _firstSeenDate
@property (readonly, nonatomic) BOOL ingestedOnLocalDevice; // ivar: _ingestedOnLocalDevice
@property (readonly, copy, nonatomic) HDHRSOriginInformation *originInformation; // ivar: _originInformation


+(BOOL)supportsSecureCoding;
+(id)resourceObjectWithData:(id)arg0 uniquenessChecksum:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 firstSeenDate:(id)arg5 extractionHints:(NSUInteger)arg6 originVersion:(struct ? )arg7 originBuild:(id)arg8 country:(id)arg9 existingROWID:(id)arg10 ingestedOnLocalDevice:(BOOL)arg11 error:(*id)arg12 ;
+(id)resourceObjectWithStaticIdentifier:(id)arg0 data:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 firstSeenDate:(id)arg5 extractionHints:(NSUInteger)arg6 originVersion:(struct ? )arg7 originBuild:(id)arg8 country:(id)arg9 error:(*id)arg10 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithResourceIdentifier:(id)arg0 JSONObject:(id)arg1 uniquenessChecksum:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 firstSeenDate:(id)arg6 extractionHints:(NSUInteger)arg7 originInformation:(id)arg8 existingROWID:(id)arg9 ingestedOnLocalDevice:(BOOL)arg10 country:(id)arg11 ;
-(id)copyWithAlteredData:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResourceData:(id)arg0 receivedDate:(id)arg1 firstSeenDate:(id)arg2 extractionHints:(NSUInteger)arg3 originInformation:(id)arg4 country:(id)arg5 existingROWID:(id)arg6 ingestedOnLocalDevice:(BOOL)arg7 error:(*id)arg8 ;
-(id)uniquenessChecksum;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif