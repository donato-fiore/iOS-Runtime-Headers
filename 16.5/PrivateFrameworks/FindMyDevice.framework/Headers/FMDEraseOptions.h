// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDERASEOPTIONS_H
#define FMDERASEOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDEraseOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL brickDevice; // ivar: _brickDevice
@property (nonatomic) CGFloat customDelay; // ivar: _customDelay
@property (nonatomic) BOOL hasBridgeCoProcessor; // ivar: _hasBridgeCoProcessor
@property (nonatomic) CGFloat maxDelayInterval; // ivar: _maxDelayInterval
@property (nonatomic) BOOL useObliteration; // ivar: _useObliteration


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif