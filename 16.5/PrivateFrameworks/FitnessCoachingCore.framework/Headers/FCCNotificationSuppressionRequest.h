// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCNOTIFICATIONSUPPRESSIONREQUEST_H
#define FCCNOTIFICATIONSUPPRESSIONREQUEST_H

@class NSString, NSDate;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>


@interface FCCNotificationSuppressionRequest : NSObject <FCCDataSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 expirationDate:(id)arg1 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)transportData;


@end


#endif