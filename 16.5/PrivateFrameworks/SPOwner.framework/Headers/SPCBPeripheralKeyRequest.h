// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCBPERIPHERALKEYREQUEST_H
#define SPCBPERIPHERALKEYREQUEST_H

@class NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPCBPeripheralKeyRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSArray *requestParameters; // ivar: _requestParameters


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 requestParameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif