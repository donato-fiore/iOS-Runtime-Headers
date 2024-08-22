// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYSEEDPROGRAMMANAGER_H
#define BYSEEDPROGRAMMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BYSeedProgramManager : NSObject

@property (readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;


-(NSInteger)currentSeedProgram;
-(void)enrollInSeedProgramNamed:(id)arg0 withAssetAudience:(id)arg1 programID:(id)arg2 completion:(id)arg3 ;


@end


#endif