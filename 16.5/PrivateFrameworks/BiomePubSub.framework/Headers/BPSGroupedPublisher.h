// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSGROUPEDPUBLISHER_H
#define BPSGROUPEDPUBLISHER_H

@class NSString;
@protocol BPSPublisher, BPSConnectablePublisher;

#import <Foundation/Foundation.h>

#import "BPSMulticast.h"

@interface BPSGroupedPublisher : NSObject <BPSPublisher, BPSConnectablePublisher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BPSMulticast *multicast; // ivar: _multicast
@property (readonly) Class superclass;


-(id)aggregateWithInitial:(id)arg0 nextPartialResult:(id)arg1 ;
-(id)initWithUpstream:(id)arg0 createSubject:(id)arg1 ;
-(id)subscribeOnKey:(id)arg0 ;
-(void)connect;
-(void)subscribe:(id)arg0 ;


@end


#endif