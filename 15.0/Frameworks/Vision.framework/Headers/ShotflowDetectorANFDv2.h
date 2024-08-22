// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHOTFLOWDETECTORANFDV2_H
#define SHOTFLOWDETECTORANFDV2_H



#import "ShotflowDetectorANODBase.h"

@interface ShotflowDetectorANFDv2 : ShotflowDetectorANODBase



+(Class)shotflowNetworkClass;
+(id)filterThresholds;
+(id)supportedLabelKeys;
-(id)initWithNetwork:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 filterThresholds:(id)arg1 ;
-(id)nmsBoxes:(id)arg0 ;
-(id)processBoxes:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;


@end


#endif