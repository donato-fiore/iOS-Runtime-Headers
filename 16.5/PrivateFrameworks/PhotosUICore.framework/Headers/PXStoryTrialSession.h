// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTRIALSESSION_H
#define PXSTORYTRIALSESSION_H

@class TRIClient;

#import <Foundation/Foundation.h>


@interface PXStoryTrialSession : NSObject

@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient


-(id)_levelForFactorName:(id)arg0 ;
-(id)fileURLForFactorName:(id)arg0 ;
-(id)init;


@end


#endif