// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCKEVENTITEM_H
#define GCKEVENTITEM_H


#import <Foundation/Foundation.h>


@interface GCKEventItem : NSObject

@property *? event; // ivar: _event
@property unsigned int pid; // ivar: _pid


-(id)init;
-(id)initWithEvent:(struct ? *)arg0 remotePeer:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif