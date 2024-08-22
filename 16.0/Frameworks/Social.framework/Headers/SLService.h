// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSERVICE_H
#define SLSERVICE_H


#import <Foundation/Foundation.h>


@interface SLService : NSObject



+(id)allServices;
+(id)serviceForServiceType:(id)arg0 ;
-(BOOL)hasAccounts;
-(BOOL)isFirstClassService;
-(BOOL)supportsImageURL:(id)arg0 ;
-(BOOL)supportsVideoURL:(id)arg0 ;
-(NSInteger)maximumImageCount;
-(NSInteger)maximumImageDataSize;
-(NSInteger)maximumURLCount;
-(NSInteger)maximumVideoCount;
-(NSInteger)maximumVideoDataSize;
-(NSInteger)maximumVideoTimeLimit;
-(id)accountType;
-(id)activityImage;
-(id)activityTitle;
-(id)composeViewController;
-(id)serviceType;
-(void)addExtraParameters:(id)arg0 forRequest:(id)arg1 ;


@end


#endif