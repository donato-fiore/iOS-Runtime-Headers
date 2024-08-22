// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBSCALABLEPIPE_H
#define CBSCALABLEPIPE_H

@class NSInputStream, NSString, NSOutputStream;

#import <Foundation/Foundation.h>

#import "CBScalablePipeManager.h"
#import "CBCentral.h"
#import "CBPeer.h"

@interface CBScalablePipe : NSObject {
    CBScalablePipeManager *_pipeManager;
    int _socket;
}


@property (readonly, nonatomic) CBCentral *central; // ivar: _central
@property (readonly, nonatomic) *void channel; // ivar: _channel
@property (readonly, nonatomic) NSInputStream *input; // ivar: _input
@property (readonly, nonatomic) unsigned int localCLFeatures; // ivar: _localCLFeatures
@property (readonly, nonatomic) unsigned char localCLVersion; // ivar: _localCLVersion
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSOutputStream *output; // ivar: _output
@property (readonly, nonatomic) CBPeer *peer; // ivar: _peer
@property (readonly, nonatomic) unsigned int peerCLFeatures; // ivar: _peerCLFeatures
@property (readonly, nonatomic) unsigned char peerCLVersion; // ivar: _peerCLVersion
@property (readonly, nonatomic) NSInteger peerType; // ivar: _peerType
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) BOOL reliablePipe; // ivar: _reliablePipe
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)description;
-(id)initWithPipeManager:(id)arg0 info:(id)arg1 ;
-(void)dealloc;
-(void)setOrphan;


@end


#endif