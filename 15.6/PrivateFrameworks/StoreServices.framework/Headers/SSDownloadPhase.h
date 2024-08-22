// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDOWNLOADPHASE_H
#define SSDOWNLOADPHASE_H

@class NSString;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SSOperationProgress.h"

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying>

 {
    SSOperationProgress *_operationProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat estimatedSecondsRemaining;
@property (readonly) NSUInteger hash;
@property (readonly) SSOperationProgress *operationProgress;
@property (readonly) NSInteger phaseType;
@property (readonly) float progressChangeRate;
@property (readonly) NSInteger progressUnits;
@property (readonly) NSInteger progressValue;
@property (readonly) Class superclass;
@property (readonly) NSInteger totalProgressValue;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithOperationProgress:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif