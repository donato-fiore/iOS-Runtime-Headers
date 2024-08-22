// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWBRACKETSETTINGS_H
#define BWBRACKETSETTINGS_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BWBracketSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int bracketFrameCount;
@property (readonly, nonatomic) int bracketingMode; // ivar: _bracketingMode
@property (copy, nonatomic) NSArray *exposureValues; // ivar: _exposureValues
@property (nonatomic) BOOL lensStabilizationEnabledForClientBracket; // ivar: _lensStabilizationEnabledForClientBracket
@property (copy, nonatomic) NSArray *manualExposureBracketedCaptureParams; // ivar: _manualExposureBracketedCaptureParams
@property (copy, nonatomic) NSDictionary *oisBracketedCaptureParams; // ivar: _oisBracketedCaptureParams
@property (nonatomic) BOOL providePreBracketedEV0; // ivar: _providePreBracketedEV0


+(BOOL)supportsSecureCoding;
+(id)bracketSettingsForBracketingMode:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif