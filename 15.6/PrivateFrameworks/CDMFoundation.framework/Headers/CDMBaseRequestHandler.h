// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMBASEREQUESTHANDLER_H
#define CDMBASEREQUESTHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CDMServiceGraph.h"

@interface CDMBaseRequestHandler : NSObject {
    NSUInteger _handlerState;
    CDMServiceGraph *_serviceGraph;
    id *_result;
}


@property (readonly, nonatomic) NSString *handlerId; // ivar: _handlerId


-(NSUInteger)getHandlerState;
-(id)getError;
-(id)getResult;
-(id)getServiceGraph;
-(id)init;
-(id)initWithId:(id)arg0 serviceGraph:(id)arg1 ;
-(void)setHandlerState:(NSUInteger)arg0 ;


@end


#endif