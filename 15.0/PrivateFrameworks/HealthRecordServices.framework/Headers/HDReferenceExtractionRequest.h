// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDREFERENCEEXTRACTIONREQUEST_H
#define HDREFERENCEEXTRACTIONREQUEST_H

@class NSString, NSArray, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDReferenceExtractionRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *FHIRRelease; // ivar: _FHIRRelease
@property (readonly, copy, nonatomic) NSArray *FHIRResourceData; // ivar: _FHIRResourceData
@property (readonly, copy, nonatomic) NSArray *resources; // ivar: _resources
@property (readonly, copy, nonatomic) NSURL *serverBaseURL; // ivar: _serverBaseURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResources:(id)arg0 FHIRResourceData:(id)arg1 serverBaseURL:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif