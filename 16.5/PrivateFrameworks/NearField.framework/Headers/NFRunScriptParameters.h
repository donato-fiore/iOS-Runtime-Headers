// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFRUNSCRIPTPARAMETERS_H
#define NFRUNSCRIPTPARAMETERS_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFRunScriptParameters : NSObject <NSSecureCoding>



@property (nonatomic) BOOL checkWhitelist; // ivar: _checkWhitelist
@property (nonatomic) BOOL deactivateAllApps; // ivar: _deactivateAllApps
@property (nonatomic) BOOL disableCompletionNotification; // ivar: _disableCompletionNotification
@property (nonatomic) BOOL includeAPDUDuration; // ivar: _includeAPDUDuration
@property (nonatomic) BOOL initialSelectBeforeRun; // ivar: _initialSelectBeforeRun
@property (nonatomic) NSUInteger outFinalSWStatus; // ivar: _outFinalSWStatus
@property (nonatomic) CGFloat outTotalAPDUExecutionDuration; // ivar: _outTotalAPDUExecutionDuration
@property (retain, nonatomic) NSString *seid; // ivar: _seid
@property (nonatomic) BOOL toSystemOS; // ivar: _toSystemOS
@property (retain, nonatomic) NSArray *whitelistedAID; // ivar: _whitelistedAID


+(BOOL)supportsSecureCoding;
+(id)internalParameterWithParameter:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif