// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBDEVICETRANSFERPROGRESS_H
#define MBDEVICETRANSFERPROGRESS_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBDeviceTransferProgress : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger bytesTransferred; // ivar: _bytesTransferred
@property (retain, nonatomic) NSDate *fileTransferStartDate; // ivar: _fileTransferStartDate
@property (nonatomic) NSUInteger filesTransferred; // ivar: _filesTransferred
@property (nonatomic) NSInteger minutesRemaining; // ivar: _minutesRemaining
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (retain, nonatomic) NSString *phaseDescription; // ivar: _phaseDescription
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) NSDate *restoreStartDate; // ivar: _restoreStartDate
@property (nonatomic) NSUInteger totalByteCount; // ivar: _totalByteCount
@property (nonatomic) NSUInteger totalFileCount; // ivar: _totalFileCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif