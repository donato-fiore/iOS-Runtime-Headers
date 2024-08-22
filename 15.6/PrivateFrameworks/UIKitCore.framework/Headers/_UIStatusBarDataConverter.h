// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDATACONVERTER_H
#define _UISTATUSBARDATACONVERTER_H


#import <Foundation/Foundation.h>


@interface _UIStatusBarDataConverter : NSObject



+(id)_cellularEntryWithData:(struct ? *)arg0 signalStrengthEnabled:(BOOL)arg1 serviceEnabled:(BOOL)arg2 dataNetworkEnabled:(BOOL)arg3 serviceString:(char *)arg4 serviceCrossfadeString:(char *)arg5 serviceBadgeString:(char *)arg6 serviceContentType:(unsigned int)arg7 dataNetworkType:(unsigned int)arg8 gsmSignalStrengthRaw:(int)arg9 gsmSignalStrengthBars:(int)arg10 callForwardingType:(int)arg11 lowDataModeActive:(BOOL)arg12 ;
+(id)convertData:(struct ? *)arg0 fromReferenceData:(id)arg1 ;


@end


#endif