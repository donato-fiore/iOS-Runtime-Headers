// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPICEXPLANATIONLINK_H
#define PKACCOUNTSUPPORTTOPICEXPLANATIONLINK_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface PKAccountSupportTopicExplanationLink : NSObject

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithDictionary:(id)arg0 ;


@end


#endif