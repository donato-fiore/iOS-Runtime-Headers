// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDOUTPUTSTREAM_H
#define MANAGEDOUTPUTSTREAM_H


#import <Foundation/Foundation.h>

#import "PHASEExternalOutputStreamDefinition.h"

@interface ManagedOutputStream : NSObject

@property (nonatomic, getter=isControllerPaused) BOOL controllerPaused; // ivar: _controllerPaused
@property (retain, nonatomic) PHASEExternalOutputStreamDefinition *definition; // ivar: _definition
@property (copy, nonatomic) id *renderBlock; // ivar: _renderBlock
@property (nonatomic, getter=isStreamPaused) BOOL streamPaused; // ivar: _streamPaused


-(id)initWithPaused:(BOOL)arg0 definition:(id)arg1 renderBlock:(id)arg2 ;


@end


#endif