// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MINIMALSYNDROMEHANDLER_H
#define MINIMALSYNDROMEHANDLER_H

@class NSString;
@protocol SyndromeHandlerProtocol;

#import <Foundation/Foundation.h>

#import "ManagedEventHandler.h"

@interface MinimalSyndromeHandler : NSObject <SyndromeHandlerProtocol>

 {
    NSString *_syndromeName;
    char * _syndromeUTF8Name;
    ManagedEventHandler *_eventHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)getHandlerByName:(id)arg0 ;
+(void)initialize;
-(void)didReceiveSyndrome:(id)arg0 ;


@end


#endif