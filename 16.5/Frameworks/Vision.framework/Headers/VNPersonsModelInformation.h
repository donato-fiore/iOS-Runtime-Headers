// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPERSONSMODELINFORMATION_H
#define VNPERSONSMODELINFORMATION_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "VNPersonsModelAlgorithm.h"

@interface VNPersonsModelInformation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) VNPersonsModelAlgorithm *algorithm; // ivar: _algorithm
@property (readonly, copy, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(NSUInteger)arg0 lastModificationDate:(id)arg1 algorithm:(id)arg2 readOnly:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif