// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFRUNSCRIPTPARAMETERS_H
#define NFRUNSCRIPTPARAMETERS_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFRunScriptParameters : NSObject <NSSecureCoding>



@property BOOL checkWhitelist; // ivar: _checkWhitelist
@property BOOL deactivateAllApps; // ivar: _deactivateAllApps
@property BOOL includeAPDUDuration; // ivar: _includeAPDUDuration
@property BOOL initialSelectBeforeRun; // ivar: _initialSelectBeforeRun
@property NSUInteger outFinalSWStatus; // ivar: _outFinalSWStatus
@property CGFloat outTotalAPDUExecutionDuration; // ivar: _outTotalAPDUExecutionDuration
@property (retain) NSString *seid; // ivar: _seid
@property BOOL toSystemOS; // ivar: _toSystemOS
@property (retain) NSArray *whitelistedAID; // ivar: _whitelistedAID


+(BOOL)supportsSecureCoding;
+(id)internalParameterWithParameter:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif