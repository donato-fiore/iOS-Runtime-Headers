// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNENTITYIDENTIFICATIONMODELWRITEOPTIONS_H
#define VNENTITYIDENTIFICATIONMODELWRITEOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNEntityIdentificationModelWriteOptions : NSObject <NSCopying, NSSecureCoding>



@property BOOL readOnly; // ivar: _readOnly
@property NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif