// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCTAGGEDMESSAGE_H
#define TCTAGGEDMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCTaggedMessage : NSObject

@property (readonly, nonatomic) int messageTag; // ivar: mMessageTag
@property (readonly, copy, nonatomic) NSString *messageText; // ivar: mMessageText


+(id)taggedMessageWithMessageText:(id)arg0 ;
-(id)initWithMessageText:(id)arg0 ;


@end


#endif