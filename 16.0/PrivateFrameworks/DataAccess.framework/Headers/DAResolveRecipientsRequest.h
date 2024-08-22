// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DARESOLVERECIPIENTSREQUEST_H
#define DARESOLVERECIPIENTSREQUEST_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface DAResolveRecipientsRequest : NSObject

@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (nonatomic) BOOL retrieveAvailablilty; // ivar: _retrieveAvailablilty
@property (nonatomic) BOOL retrieveCertificates; // ivar: _retrieveCertificates
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithEmailAddresses:(id)arg0 ;
-(id)initWithEmailAddresses:(id)arg0 retrieveCertificates:(BOOL)arg1 retrieveAvailability:(BOOL)arg2 withStartTime:(id)arg3 endTime:(id)arg4 ;


@end


#endif