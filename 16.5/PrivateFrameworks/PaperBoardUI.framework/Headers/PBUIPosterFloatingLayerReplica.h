// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPOSTERFLOATINGLAYERREPLICA_H
#define PBUIPOSTERFLOATINGLAYERREPLICA_H

@class NSString;
@protocol PBUIFloatingLayerObserver;


#import "PBUIPortalReplicaView.h"

@interface PBUIPosterFloatingLayerReplica : PBUIPortalReplicaView <PBUIFloatingLayerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveStyle;
@property (nonatomic, getter=isFloatingLayerStandin) BOOL floatingLayerStandin; // ivar: _floatingLayerStandin
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFloatingLayerObserver;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif