// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSPISUGGESTIONSOBJECT_H
#define IMSPISUGGESTIONSOBJECT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface IMSPISuggestionsObject : NSObject

@property (readonly) NSString *chatGUID; // ivar: _chatGUID
@property (readonly) NSString *displayName; // ivar: _displayName
@property (readonly) NSArray *participants; // ivar: _participants


-(id)description;
-(id)initWithChatGuid:(id)arg0 displayName:(id)arg1 participants:(id)arg2 ;


@end


#endif