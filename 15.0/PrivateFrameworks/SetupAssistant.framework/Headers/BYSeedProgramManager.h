// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYSEEDPROGRAMMANAGER_H
#define BYSEEDPROGRAMMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BYSeedProgramManager : NSObject

@property (readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;


-(NSInteger)currentSeedProgram;
-(void)enrollInSeedProgramNamed:(id)arg0 withAssetAudience:(id)arg1 completion:(id)arg2 ;


@end


#endif