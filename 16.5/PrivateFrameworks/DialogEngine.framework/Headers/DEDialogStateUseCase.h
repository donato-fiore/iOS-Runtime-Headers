// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDIALOGSTATEUSECASE_H
#define DEDIALOGSTATEUSECASE_H



#import "DEDialogState.h"

@interface DEDialogStateUseCase : DEDialogState



-(BOOL)hasAllRandomId:(id)arg0 ;
-(CGFloat)lastTimestamp;
-(id)allGroundings;
-(id)allRandomIds;
-(id)groundingUsage:(id)arg0 ;
-(id)lastRandomIds;
-(int)usageCount;


@end


#endif