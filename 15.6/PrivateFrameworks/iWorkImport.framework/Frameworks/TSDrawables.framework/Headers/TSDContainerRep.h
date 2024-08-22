// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCONTAINERREP_H
#define TSDCONTAINERREP_H

@class NSString;
@protocol TSDMutableContainerRep, TSDContainerInfo, TSDMutableContainerInfo;


#import "TSDRep.h"

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>



@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
@property (readonly) Class superclass;


-(id)initWithLayout:(id)arg0 canvasView:(id)arg1 ;


@end


#endif