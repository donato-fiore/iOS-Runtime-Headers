// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHOTFLOWDETECTORANFDV1_H
#define SHOTFLOWDETECTORANFDV1_H



#import "ShotflowDetector.h"

@interface ShotflowDetectorANFDv1 : ShotflowDetector



+(Class)shotflowNetworkClass;
+(id)filterThresholds;
+(id)supportedLabelKeys;
-(id)initWithNetwork:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 filterThresholds:(id)arg1 ;
-(id)nmsBoxes:(id)arg0 ;
-(id)processBoxes:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;


@end


#endif