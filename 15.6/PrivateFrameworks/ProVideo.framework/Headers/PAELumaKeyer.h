// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAELUMAKEYER_H
#define PAELUMAKEYER_H

@class NSDictionary;


#import "PAEKeyer.h"

@interface PAELumaKeyer : PAEKeyer {
    NSDictionary *properties;
}




-(?)getKeyerNode:(?)arg0 omKeyeratTime;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)finishInitialSetup:(*id)arg0 ;
-(BOOL)isLumaKey;
-(BOOL)oscIsPublishable;
-(id)initWithAPIManager:(id)arg0 ;
-(void)createLutForNode:(*void)arg0 input:(int)arg1 rect:(struct HGRect *)arg2 omKeyer:(*void)arg3 ;
-(void)dealloc;


@end


#endif