// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSPREPLICATOMBSTONERECORD_H
#define _MSPREPLICATOMBSTONERECORD_H

@class NSProxy;
@protocol MSPReplicaRecord;



@interface _MSPReplicaTombstoneRecord : NSProxy {
    id<MSPReplicaRecord> *_record;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)contents;
-(id)contentsTimestamp;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif