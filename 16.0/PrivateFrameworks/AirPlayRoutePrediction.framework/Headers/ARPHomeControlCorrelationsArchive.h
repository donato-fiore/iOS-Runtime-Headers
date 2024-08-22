// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPHOMECONTROLCORRELATIONSARCHIVE_H
#define ARPHOMECONTROLCORRELATIONSARCHIVE_H

@class NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARPHomeControlCorrelationsArchive : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *archiveDate; // ivar: _archiveDate
@property (readonly, nonatomic) NSDictionary *microlocationCorrelationsDictionary; // ivar: _microlocationCorrelationsDictionary
@property (readonly, nonatomic) NSDictionary *nextActionCorrelationsDictionary; // ivar: _nextActionCorrelationsDictionary


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMicrolocationsCorrelationsDictionary:(id)arg0 nextActionCorrelationsDictionary:(id)arg1 archiveDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif