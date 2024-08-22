// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCXSTREAMUTILITY_H
#define OCXSTREAMUTILITY_H


#import <Foundation/Foundation.h>


@interface OCXStreamUtility : NSObject



+(BOOL)pScanStreamForwardToApplicableContentInAlternateContent:(struct _xmlTextReader *)arg0 ;
+(BOOL)readStream:(struct _xmlTextReader *)arg0 streamState:(id)arg1 ;


@end


#endif