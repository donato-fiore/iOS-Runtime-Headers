// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTMAPSERVICEOPTIONS_H
#define RTMAPSERVICEOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTMapServiceOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL useBackgroundTraits; // ivar: _useBackgroundTraits


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUseBackgroundTraits:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif