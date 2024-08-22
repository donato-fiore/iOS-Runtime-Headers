// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUIASKFORTIMEREQUESTRESPONSE_H
#define STUIASKFORTIMEREQUESTRESPONSE_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STUIAskForTimeRequestResponse : NSObject <NSCopying>



@property (copy, nonatomic) NSString *budgetedIdentifier; // ivar: _budgetedIdentifier
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSNumber *requestingUserDSID; // ivar: _requestingUserDSID
@property (nonatomic) NSUInteger usageType; // ivar: _usageType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRequestResponse:(id)arg0 ;


@end


#endif