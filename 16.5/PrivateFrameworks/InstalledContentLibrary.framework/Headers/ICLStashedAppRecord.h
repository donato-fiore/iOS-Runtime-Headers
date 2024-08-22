// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLSTASHEDAPPRECORD_H
#define ICLSTASHEDAPPRECORD_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;


#import "ICLAppRecord.h"

@interface ICLStashedAppRecord : ICLAppRecord <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDate *stashOriginalInstallTimestamp; // ivar: _stashOriginalInstallTimestamp
@property (copy, nonatomic) NSDate *stashedAtTimestamp; // ivar: _stashedAtTimestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyRecordDictionary:(id)arg0 ;
-(id)legacyRecordDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif