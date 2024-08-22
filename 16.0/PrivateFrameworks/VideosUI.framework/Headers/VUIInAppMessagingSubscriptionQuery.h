// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIINAPPMESSAGINGSUBSCRIPTIONQUERY_H
#define VUIINAPPMESSAGINGSUBSCRIPTIONQUERY_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface VUIInAppMessagingSubscriptionQuery : NSObject

@property (readonly, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (readonly, nonatomic) NSString *attributePath; // ivar: _attributePath
@property (readonly, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)queryWithString:(id)arg0 ;
-(NSUInteger)_lookupTypeForString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif