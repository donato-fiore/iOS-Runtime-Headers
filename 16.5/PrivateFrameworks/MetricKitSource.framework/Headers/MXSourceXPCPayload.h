// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSOURCEXPCPAYLOAD_H
#define MXSOURCEXPCPAYLOAD_H

@class NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXSourceXPCPayload : NSObject <NSSecureCoding>



@property (retain) NSDate *datestamp; // ivar: _datestamp
@property (retain) NSDictionary *metrics; // ivar: _metrics
@property NSInteger sourceID; // ivar: _sourceID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceID:(NSInteger)arg0 withDateStamp:(id)arg1 andMetrics:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif