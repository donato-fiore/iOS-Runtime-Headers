// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFHIRRESOURCEDATA_H
#define HDFHIRRESOURCEDATA_H

@class HKFHIRVersion, NSData, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDFHIRResourceData : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) HKFHIRVersion *FHIRVersion; // ivar: _FHIRVersion
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONDictionaryWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 sourceURL:(id)arg1 FHIRVersion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif