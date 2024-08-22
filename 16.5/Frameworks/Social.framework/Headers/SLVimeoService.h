// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLVIMEOSERVICE_H
#define SLVIMEOSERVICE_H



#import "SLService.h"

@interface SLVimeoService : SLService



-(BOOL)isFirstClassService;
-(NSInteger)authenticationStyle;
-(NSInteger)maximumImageCount;
-(NSInteger)maximumURLCount;
-(NSInteger)maximumVideoCount;
-(NSInteger)maximumVideoDataSize;
-(NSInteger)maximumVideoTimeLimit;
-(id)accountTypeIdentifier;
-(id)activityImage;
-(id)activityTitle;
-(id)serviceType;


@end


#endif