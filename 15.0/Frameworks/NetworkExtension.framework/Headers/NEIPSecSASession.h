// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIPSECSASESSION_H
#define NEIPSECSASESSION_H

@class NSMutableArray, NSString;
@protocol NEIPSecSASessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEIPSecSASession : NSObject

@property (weak) NSObject<NEIPSecSASessionDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain) NSObject<OS_dispatch_queue> *internalDelegateQueue; // ivar: _internalDelegateQueue
@property (retain) NSMutableArray *larvalSAs; // ivar: _larvalSAs
@property (retain) NSString *name; // ivar: _name
@property (retain) NSMutableArray *securityAssociations; // ivar: _securityAssociations
@property (nonatomic) NSUInteger uniqueIndex; // ivar: _uniqueIndex


-(BOOL)addLarvalSA:(id)arg0 ;
-(BOOL)addSA:(id)arg0 ;
-(BOOL)migrateSA:(id)arg0 ;
-(BOOL)removeSA:(id)arg0 ;
-(BOOL)updateSA:(id)arg0 ;
-(id)copyEmptySASession;
-(id)description;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeAllSAs;
-(void)startBlackholeDetection:(unsigned int)arg0 incomingSA:(id)arg1 outgoingSA:(id)arg2 ;
-(void)startIdleTimeout:(unsigned int)arg0 incomingSA:(id)arg1 outgoingSA:(id)arg2 ;


@end


#endif