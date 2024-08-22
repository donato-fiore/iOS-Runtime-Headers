// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHCRITICALASSERTDIDFAILDETAILS_H
#define BLSHCRITICALASSERTDIDFAILDETAILS_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface BLSHCriticalAssertDidFailDetails : NSObject

@property (copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL debugLogsEnabled; // ivar: _debugLogsEnabled
@property (copy, nonatomic) NSString *device; // ivar: _device
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (copy, nonatomic) NSString *processName; // ivar: _processName


-(id)initWithCriticalAssertDidFailDictionary:(id)arg0 ;


@end


#endif