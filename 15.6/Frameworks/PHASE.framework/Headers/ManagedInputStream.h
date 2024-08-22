// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDINPUTSTREAM_H
#define MANAGEDINPUTSTREAM_H


#import <Foundation/Foundation.h>

#import "PHASEExternalInputStreamDefinition.h"

@interface ManagedInputStream : NSObject

@property (retain, nonatomic) PHASEExternalInputStreamDefinition *definition; // ivar: _definition
@property (nonatomic, getter=isStreamPaused) BOOL streamPaused; // ivar: _streamPaused


-(id)initWithPaused:(BOOL)arg0 definition:(id)arg1 ;


@end


#endif