// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIPSECSAKERNELSESSION_H
#define NEIPSECSAKERNELSESSION_H



#import "NEIPSecSASession.h"

@interface NEIPSecSAKernelSession : NEIPSecSASession {
    *NEIPSecDB_s _internalSession;
}




-(BOOL)addLarvalSA:(id)arg0 ;
-(BOOL)addSA:(id)arg0 ;
-(BOOL)migrateSA:(id)arg0 ;
-(BOOL)removeSA:(id)arg0 ;
-(BOOL)updateSA:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 pfkeySocket:(int)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeAllSAs;
-(void)setDelegateQueue:(id)arg0 ;
-(void)startBlackholeDetection:(unsigned int)arg0 incomingSA:(id)arg1 outgoingSA:(id)arg2 ;
-(void)startIdleTimeout:(unsigned int)arg0 incomingSA:(id)arg1 outgoingSA:(id)arg2 ;


@end


#endif