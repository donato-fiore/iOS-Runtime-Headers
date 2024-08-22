// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCMAPROUTE_H
#define PCMAPROUTE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PCMapLocation.h"

@interface PCMapRoute : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PCMapLocation *endLocation; // ivar: _endLocation
@property (nonatomic) BOOL hasEndLocation; // ivar: _hasEndLocation
@property (retain, nonatomic) PCMapLocation *startLocation; // ivar: _startLocation


+(BOOL)supportsSecureCoding;
+(id)decodeFromBlindChannelData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsBlindChannelData;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif