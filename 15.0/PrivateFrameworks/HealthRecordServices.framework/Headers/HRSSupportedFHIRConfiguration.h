// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRSSUPPORTEDFHIRCONFIGURATION_H
#define HRSSUPPORTEDFHIRCONFIGURATION_H

@class NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HRSSupportedFHIRConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *releasesTable; // ivar: _releasesTable


+(BOOL)supportsSecureCoding;
+(id)emetConfiguration;
-(BOOL)addSupportedFHIRRelease:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSupportedFHIRRelease:(id)arg0 ;
-(BOOL)isSupportedFHIRResourceType:(id)arg0 FHIRRelease:(id)arg1 ;
-(BOOL)isSupportedFHIRResourceType:(id)arg0 FHIRVersionString:(id)arg1 ;
-(BOOL)isSupportedFHIRVersionString:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)supportedReleaseForFHIRRelease:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif