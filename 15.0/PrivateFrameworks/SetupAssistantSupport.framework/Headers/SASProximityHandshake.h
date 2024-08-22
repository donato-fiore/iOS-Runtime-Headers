// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPROXIMITYHANDSHAKE_H
#define SASPROXIMITYHANDSHAKE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SASProximityHandshake : NSObject <NSSecureCoding>



@property BOOL hasPasscodeSet; // ivar: _hasPasscodeSet
@property NSInteger platformType; // ivar: _platformType
@property int simplePasscodeType; // ivar: _simplePasscodeType
@property int unlockType; // ivar: _unlockType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadInformation;


@end


#endif