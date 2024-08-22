// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISSTREAMSPROVIDER_H
#define ISSTREAMSPROVIDER_H


#import <Foundation/Foundation.h>


@interface ISStreamsProvider : NSObject {
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