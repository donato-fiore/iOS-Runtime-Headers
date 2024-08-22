// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITINGEXTENSIONUNDOPROXYEXTENSIONSIDE_H
#define PUEDITINGEXTENSIONUNDOPROXYEXTENSIONSIDE_H

@class NSXPCConnection, NSString;
@protocol PUEditingExtensionUndoButtonHost, PUEditingExtensionUndoTarget;

#import <Foundation/Foundation.h>


@interface PUEditingExtensionUndoProxyExtensionSide : NSObject <PUEditingExtensionUndoButtonHost>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PUEditingExtensionUndoTarget> *target; // ivar: _target


-(id)initWithEndpoint:(id)arg0 ;
-(id)remoteObject;
-(void)performRedo;
-(void)performUndo;
-(void)setShowUndoRedo:(BOOL)arg0 ;
-(void)setUndoEnabled:(BOOL)arg0 redoEnabled:(BOOL)arg1 ;


@end


#endif