// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12SMARTREPLIES22SRSMARTREPLIESCHATINFO_H
#define _TTC12SMARTREPLIES22SRSMARTREPLIESCHATINFO_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies22SRSmartRepliesChatInfo : NSObject {
    ? message;
    ? messageDate;
    ? outgoingMessageHistory;
    ? keyboardLanguageID;
    ? senderID;
    ? keyboardLanguageLastChangedDate;
}


@property (nonatomic) BOOL includeDynamicSuggestions; // ivar: includeDynamicSuggestions
@property (nonatomic, copy) NSString *keyboardLanguageID;
@property (nonatomic, copy) NSDate *keyboardLanguageLastChangedDate;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSDate *messageDate;
@property (nonatomic, copy) NSArray *outgoingMessageHistory;
@property (nonatomic, copy) NSString *senderID;


-(id)init;
-(id)initWithMessage:(id)arg0 ;


@end


#endif