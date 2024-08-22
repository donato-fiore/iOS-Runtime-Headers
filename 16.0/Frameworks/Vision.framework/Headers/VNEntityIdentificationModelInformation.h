// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNENTITYIDENTIFICATIONMODELINFORMATION_H
#define VNENTITYIDENTIFICATIONMODELINFORMATION_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNEntityIdentificationModelAlgorithm.h"

@interface VNEntityIdentificationModelInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) VNEntityIdentificationModelAlgorithm *algorithm; // ivar: _algorithm
@property (readonly, copy) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(NSUInteger)arg0 algorithm:(id)arg1 lastModificationDate:(id)arg2 readOnly:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif