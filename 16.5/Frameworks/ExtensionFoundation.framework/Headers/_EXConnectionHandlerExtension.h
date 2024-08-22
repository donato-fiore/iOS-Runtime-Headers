// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXCONNECTIONHANDLEREXTENSION_H
#define _EXCONNECTIONHANDLEREXTENSION_H

@class EXExtension;
@protocol _EXConnectionHandler;



@interface _EXConnectionHandlerExtension : EXExtension

@property (retain) NSObject<_EXConnectionHandler> *connectionHandler; // ivar: _connectionHandler
@property (retain) id *principalObject; // ivar: _principalObject


-(BOOL)loadDelegateWithClass:(Class)arg0 ;
-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(void)didFinishLaunching;
-(void)willFinishLaunching;


@end


#endif