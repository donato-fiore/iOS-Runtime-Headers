// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAOUTGOINGREQUESTS_H
#define TAOUTGOINGREQUESTS_H

@class NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface TAOutgoingRequests : NSObject

@property (readonly, copy, nonatomic) NSDictionary *additionalInformation; // ivar: _additionalInformation
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key


-(id)description;
-(id)descriptionDictionary;
-(id)initWithRequestKey:(id)arg0 additionalInformation:(id)arg1 date:(id)arg2 ;


@end


#endif