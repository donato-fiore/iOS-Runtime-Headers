// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPSCANNEDOBJECT_H
#define SPSCANNEDOBJECT_H

@class NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPAccessoryInformation.h"
#import "SPIndexInformation.h"

@interface SPScannedObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) SPAccessoryInformation *accessoryInformation; // ivar: _accessoryInformation
@property (copy, nonatomic) NSData *address; // ivar: _address
@property (copy, nonatomic) NSData *advertisement; // ivar: _advertisement
@property (readonly, copy, nonatomic) SPIndexInformation *indexInformation; // ivar: _indexInformation
@property (copy, nonatomic) NSData *optional; // ivar: _optional
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (copy, nonatomic) NSDate *scanDate; // ivar: _scanDate
@property (nonatomic) unsigned char status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScanDate:(id)arg0 address:(id)arg1 advertisement:(id)arg2 status:(unsigned char)arg3 optional:(id)arg4 rssi:(NSInteger)arg5 indexInformation:(id)arg6 acccessoryInformation:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif