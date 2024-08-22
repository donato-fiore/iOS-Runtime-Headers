// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAESIMPLEKEYER_H
#define PAESIMPLEKEYER_H



#import "PAEKeyer.h"

@interface PAESimpleKeyer : PAEKeyer



-(?)getKeyerNode:(?)arg0 omKeyeratTime;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)finishInitialSetup:(*id)arg0 ;
-(BOOL)isSimpleKey;
-(BOOL)oscIsPublishable;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(BOOL)pullInitialKey:(*id)arg0 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)createLutForNode:(*void)arg0 input:(int)arg1 rect:(struct HGRect *)arg2 omKeyer:(*void)arg3 ;
-(void)dealloc;


@end


#endif