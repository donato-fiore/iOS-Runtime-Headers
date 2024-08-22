// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMARKETINGITEMACTIONCOMPONENT_H
#define AMSMARKETINGITEMACTIONCOMPONENT_H

@class NSURL, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSMarketingItemActionComponent : NSObject

@property (readonly, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSDictionary *rawValues; // ivar: _rawValues


-(id)initWithDictionary:(id)arg0 ;


@end


#endif