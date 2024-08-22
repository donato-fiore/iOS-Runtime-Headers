// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFLPEMCONFIGSESSION_H
#define NFLPEMCONFIGSESSION_H



#import "NFSession.h"

@interface NFLPEMConfigSession : NFSession



-(BOOL)configureHardwareForLPEMWithError:(*id)arg0 ;
-(BOOL)disableLPEMFeature:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)enableLPEMFeature:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)getLPEMFeaturesWithError:(*id)arg0 ;


@end


#endif