// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCLIENTINFO_H
#define APCLIENTINFO_H

@class NSString, NSArray, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "APLocationInfo.h"

@interface APClientInfo : NSObject <NSSecureCoding>



@property (retain) NSString *appVersion; // ivar: _appVersion
@property NSInteger interfaceIdiom; // ivar: _interfaceIdiom
@property (nonatomic) BOOL isLocationAvailableForAd; // ivar: _isLocationAvailableForAd
@property (retain) NSArray *keyboards; // ivar: _keyboards
@property (retain) APLocationInfo *locationInfo; // ivar: _locationInfo
@property NSInteger orientation; // ivar: _orientation
@property (retain) NSNumber *scale; // ivar: _scale
@property NSInteger screenHeight; // ivar: _screenHeight
@property NSInteger screenWidth; // ivar: _screenWidth


+(BOOL)supportsSecureCoding;
+(id)activeClientInfo;
+(id)delegate;
+(void)setActiveClientInfo:(id)arg0 ;
+(void)setDelegate:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonRepresentationWithOptions:(NSUInteger)arg0 ;
-(id)nonUICopy;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateActiveClientInfo;


@end


#endif