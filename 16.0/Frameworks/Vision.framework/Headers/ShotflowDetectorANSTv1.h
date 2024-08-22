// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHOTFLOWDETECTORANSTV1_H
#define SHOTFLOWDETECTORANSTV1_H



#import "ShotflowDetectorANODBase.h"

@interface ShotflowDetectorANSTv1 : ShotflowDetectorANODBase



+(Class)shotflowNetworkClass;
+(id)filterThresholds;
+(id)supportedLabelKeys;
-(id)getIndexBoxes:(id)arg0 filterThresholdIndex:(NSUInteger)arg1 ;
-(id)initWithNetwork:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 filterThresholds:(id)arg1 ;
-(id)modifySmallFaceThrehold:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;
-(id)nmsBoxes:(id)arg0 ;
-(id)processBoxes:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;


@end


#endif