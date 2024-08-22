// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCONVERSATIONHISTORY_H
#define SGCONVERSATIONHISTORY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SGConversationHistory : NSObject

@property (readonly) NSString *likelyLanguage; // ivar: _likelyLanguage
@property (readonly) NSArray *messages; // ivar: _messages


-(id)initWithMessages:(id)arg0 ;


@end


#endif