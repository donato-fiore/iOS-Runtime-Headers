// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FXHOSTCAPABILITIES_H
#define FXHOSTCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface FxHostCapabilities : NSObject {
    *FxHostCapabilitiesPriv _hostCapPriv;
}




+(id)getRemoteHostCapabilities;
+(void)setRemoteHostCapabilities:(id)arg0 ;
-(BOOL)formatsFloatRGBABitmapsAsARGB;
-(BOOL)hostIsFCE;
-(BOOL)hostIsFCP;
-(BOOL)hostIsMotion;
-(BOOL)notifiesParameterChangedForGenerators;
-(BOOL)parameterChangedUsableForAllParameters;
-(BOOL)supportsDisabledParameters;
-(BOOL)supportsGroupParameters;
-(BOOL)supportsHiddenParameters;
-(BOOL)supportsTemporalBitmaps;
-(BOOL)upscalesFields;
-(NSUInteger)timeBase;
-(id)glContextPixelFormatAttributes;
-(id)hostID;
-(id)initWithAPIManager:(id)arg0 ;
-(unsigned int)hostVersionNumber;
-(void)dealloc;


@end


#endif