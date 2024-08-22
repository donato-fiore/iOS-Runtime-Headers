// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNEXTENSIONCONNECTIONHANDLER_H
#define LNEXTENSIONCONNECTIONHANDLER_H

@class NSHashTable;
@protocol _EXMainConnectionHandler;

#import <Foundation/Foundation.h>

#import "LNAppContext.h"

@interface LNExtensionConnectionHandler : NSObject <_EXMainConnectionHandler>



@property (retain, nonatomic) LNAppContext *appContext; // ivar: _appContext
@property (readonly, nonatomic) NSHashTable *clientConnections; // ivar: _clientConnections
@property (retain, nonatomic) id *principalObject; // ivar: _principalObject


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithPrincipalObject:(id)arg0 ;


@end


#endif