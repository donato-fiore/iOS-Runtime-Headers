// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIMLISSTREAMSPROVIDER_H
#define AIMLISSTREAMSPROVIDER_H


#import <Foundation/Foundation.h>


@interface AIMLISStreamsProvider : NSObject {
    ? provider;
}




-(?)searchForEventGraphWithComponentIdentifier:(?)arg0 windowLengthcompletionHandler;
-(?)searchForEventGraphWithComponentIdentifiercompletionHandler;
-(id)connectedComponentGroupsWithWindowLength:(CGFloat)arg0 ;
-(id)eventGraphs;
-(id)eventGraphsWithWindowLength:(CGFloat)arg0 ;
-(id)events;
-(id)init;
-(id)siriConversations;
-(id)siriTurns;


@end


#endif