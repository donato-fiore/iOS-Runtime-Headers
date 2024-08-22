// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SROSMARTREPLIESCHATINFO_H
#define SROSMARTREPLIESCHATINFO_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "_TtC12SmartReplies22SRSmartRepliesChatInfo.h"

@interface SROSmartRepliesChatInfo : NSObject {
    _TtC12SmartReplies22SRSmartRepliesChatInfo *_info;
}


@property (nonatomic) BOOL includeDynamicSuggestions;
@property (copy, nonatomic) NSString *keyboardLanguageID;
@property (copy, nonatomic) NSDate *keyboardLanguageLastChangedDate;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDate *messageDate;
@property (copy, nonatomic) NSArray *outGoingMessageHistory;
@property (copy, nonatomic) NSString *senderID;


-(id)initWithMessage:(id)arg0 ;


@end


#endif