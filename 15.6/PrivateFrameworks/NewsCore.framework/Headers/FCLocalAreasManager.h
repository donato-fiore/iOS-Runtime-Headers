// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCLOCALAREASMANAGER_H
#define FCLOCALAREASMANAGER_H

@protocol FCLocalAreasManager, FCContentContext, FCLocalAreasProvider;

#import <Foundation/Foundation.h>

#import "FCLocalAreasMapping.h"
#import "FCAsyncSerialQueue.h"

@interface FCLocalAreasManager : NSObject <FCLocalAreasManager>



@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (retain, nonatomic) FCLocalAreasMapping *localAreasMapping; // ivar: _localAreasMapping
@property (readonly, nonatomic) NSObject<FCLocalAreasProvider> *possiblyUnfetchedLocalAreasProvider;
@property (retain, nonatomic) FCAsyncSerialQueue *queue; // ivar: _queue


-(id)initWithContentContext:(id)arg0 ;
-(void)fetchLocalAreasProvider:(id)arg0 ;


@end


#endif