// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSUGGESTIONSPROVIDER_H
#define LNSUGGESTIONSPROVIDER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface LNSuggestionsProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)init;
-(id)suggestedActionsForSuggestionsRequests:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif