// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOCONNECTIONPOINT_H
#define AVAUDIOCONNECTIONPOINT_H


#import <Foundation/Foundation.h>

#import "AVAudioNode.h"

@interface AVAudioConnectionPoint : NSObject {
    *void _reserved;
}


@property (readonly, nonatomic) NSUInteger bus; // ivar: _bus
@property (readonly, weak, nonatomic) AVAudioNode *node; // ivar: _node


+(id)connectionPointWithNode:(id)arg0 bus:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithNode:(id)arg0 bus:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif