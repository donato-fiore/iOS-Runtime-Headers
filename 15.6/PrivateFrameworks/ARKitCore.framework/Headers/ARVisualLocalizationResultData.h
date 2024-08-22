// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARVISUALLOCALIZATIONRESULTDATA_H
#define ARVISUALLOCALIZATIONRESULTDATA_H

@class NSString, VLLocalizationDebugInfo, VLLocalizationResult, CLLocation;
@protocol ARResultData, ARDaemonSecureCoding;

#import <Foundation/Foundation.h>

#import "ARLocationData.h"

@interface ARVisualLocalizationResultData : NSObject <ARResultData, ARDaemonSecureCoding>

 {
    ARLocationData *_inputLocation;
}


@property (readonly, nonatomic) NSInteger algorithmVersion; // ivar: _algorithmVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) VLLocalizationDebugInfo *debugInfo; // ivar: _debugInfo
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heading; // ivar: _heading
@property (readonly, nonatomic) VLLocalizationResult *localizationResult; // ivar: _localizationResult
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat undulation; // ivar: _undulation


+(BOOL)supportsSecureCoding;
-(CGFloat)timestamp;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVLLocalizationResult:(id)arg0 errorCode:(NSInteger)arg1 debugInfo:(id)arg2 heading:(CGFloat)arg3 inputLocation:(id)arg4 algorithmVersion:(NSInteger)arg5 undulation:(CGFloat)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif