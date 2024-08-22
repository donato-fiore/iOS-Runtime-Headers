// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSPACE_H
#define SUSPACE_H


#import <Foundation/Foundation.h>


@interface SUSpace : NSObject



+(BOOL)makeRoomForUpdate:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)currentFreeSpaceForVolume:(id)arg0 ;
+(id)hasSufficientSpaceWithOptions:(id)arg0 error:(*id)arg1 ;
+(void)hasSufficientSpaceWithOptions:(id)arg0 withCompletion:(id)arg1 ;
+(void)makeRoomForUpdate:(id)arg0 completion:(id)arg1 ;


@end


#endif