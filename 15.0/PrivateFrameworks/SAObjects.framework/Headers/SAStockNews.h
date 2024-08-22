// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTOCKNEWS_H
#define SASTOCKNEWS_H

@class NSDate, NSString;


#import "SADomainObject.h"

@interface SAStockNews : SADomainObject

@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;


+(id)news;
+(id)newsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif