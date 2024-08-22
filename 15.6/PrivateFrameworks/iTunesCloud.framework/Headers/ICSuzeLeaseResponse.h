// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSUZELEASERESPONSE_H
#define ICSUZELEASERESPONSE_H

@class NSDate, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface ICSuzeLeaseResponse : NSObject {
    NSDate *_requestDate;
    NSDictionary *_responseDictionary;
}


@property (readonly, copy, nonatomic) NSData *clientData;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;


-(id)initWithResponseDictionary:(id)arg0 requestDate:(id)arg1 ;


@end


#endif