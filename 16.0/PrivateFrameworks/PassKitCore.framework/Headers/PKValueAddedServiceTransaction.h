// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVALUEADDEDSERVICETRANSACTION_H
#define PKVALUEADDEDSERVICETRANSACTION_H

@class NSString, NSNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKValueAddedMerchant.h"

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding>



@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed
@property (nonatomic) NSInteger error; // ivar: _error
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKValueAddedMerchant *merchant; // ivar: _merchant
@property (retain, nonatomic) NSString *merchantURL; // ivar: _merchantURL
@property (retain, nonatomic) NSNumber *terminalApplicationVersion; // ivar: _terminalApplicationVersion
@property (nonatomic) NSInteger terminalMode; // ivar: _terminalMode
@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif