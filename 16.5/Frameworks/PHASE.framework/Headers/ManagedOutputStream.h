// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDOUTPUTSTREAM_H
#define MANAGEDOUTPUTSTREAM_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "PHASEExternalOutputStreamDefinition.h"

@interface ManagedOutputStream : NSObject

@property (retain, nonatomic) NSUUID *attributedClientID; // ivar: _attributedClientID
@property (nonatomic, getter=isControllerPaused) BOOL controllerPaused; // ivar: _controllerPaused
@property (retain, nonatomic) PHASEExternalOutputStreamDefinition *definition; // ivar: _definition
@property (copy, nonatomic) id *renderBlock; // ivar: _renderBlock
@property (nonatomic, getter=isStreamPaused) BOOL streamPaused; // ivar: _streamPaused


-(id)initWithPaused:(BOOL)arg0 attributedTo:(id)arg1 definition:(id)arg2 renderBlock:(id)arg3 ;


@end


#endif