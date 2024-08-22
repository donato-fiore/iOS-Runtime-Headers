// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORIESDATASOURCESTATE_H
#define PXMEMORIESDATASOURCESTATE_H

@class NSDictionary, PHFetchResult;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXMemoriesDataSourceState : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *infosByMemory; // ivar: _infosByMemory
@property (readonly, nonatomic) PHFetchResult *memories; // ivar: _memories


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMemories:(id)arg0 infosByMemory:(id)arg1 ;
-(id)stateUpdatedWithChange:(id)arg0 outMemoriesChangeDetails:(*id)arg1 ;


@end


#endif