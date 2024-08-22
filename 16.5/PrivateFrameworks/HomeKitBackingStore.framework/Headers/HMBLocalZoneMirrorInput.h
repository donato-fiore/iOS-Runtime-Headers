// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALZONEMIRRORINPUT_H
#define HMBLOCALZONEMIRRORINPUT_H



#import "HMBLocalZoneInput.h"

@interface HMBLocalZoneMirrorInput : HMBLocalZoneInput



-(BOOL)stageAdditionForModel:(id)arg0 externalID:(id)arg1 externalData:(id)arg2 error:(*id)arg3 ;
-(BOOL)stageRemovalForModelWithExternalID:(id)arg0 error:(*id)arg1 ;
-(id)commitWithOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif