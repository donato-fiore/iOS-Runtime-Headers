// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPARSECSUBSCRIPTIONINFO_H
#define WBSPARSECSUBSCRIPTIONINFO_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface WBSParsecSubscriptionInfo : NSObject

@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)_initWithDictionary:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif