// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSCANNEDOBJECT_H
#define SPSCANNEDOBJECT_H

@class NSData, NSNumber, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPAccessoryInformation.h"
#import "SPIndexInformation.h"

@interface SPScannedObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) SPAccessoryInformation *accessoryInformation; // ivar: _accessoryInformation
@property (copy, nonatomic) NSData *address; // ivar: _address
@property (copy, nonatomic) NSData *advertisement; // ivar: _advertisement
@property (nonatomic) unsigned char ek; // ivar: _ek
@property (readonly, copy, nonatomic) NSNumber *hint; // ivar: _hint
@property (readonly, copy, nonatomic) SPIndexInformation *indexInformation; // ivar: _indexInformation
@property (readonly, copy, nonatomic) NSData *optional;
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (copy, nonatomic) NSDate *scanDate; // ivar: _scanDate
@property (nonatomic) unsigned char status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScanDate:(id)arg0 address:(id)arg1 advertisement:(id)arg2 status:(unsigned char)arg3 ek:(unsigned char)arg4 hint:(id)arg5 rssi:(NSInteger)arg6 indexInformation:(id)arg7 acccessoryInformation:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif