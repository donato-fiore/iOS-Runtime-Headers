// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUTILITIESWRAPPER_H
#define AFUTILITIESWRAPPER_H


#import <Foundation/Foundation.h>


@interface AFUtilitiesWrapper : NSObject



+(BOOL)deviceSupportsSiriUOD;
+(BOOL)isDictationLanguageInstalledForOnDeviceDictation:(id)arg0 offlineDictationStatus:(id)arg1 ;
+(BOOL)offlineDictationCapable;
+(BOOL)shouldRunAsrOnServerForUOD;


@end


#endif