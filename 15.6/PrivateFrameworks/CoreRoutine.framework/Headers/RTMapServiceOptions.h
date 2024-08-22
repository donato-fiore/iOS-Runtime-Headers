// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTMAPSERVICEOPTIONS_H
#define RTMAPSERVICEOPTIONS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTMapServiceOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *analyticsIdentifier; // ivar: _analyticsIdentifier
@property (readonly, nonatomic) BOOL useBackgroundTraits; // ivar: _useBackgroundTraits


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUseBackgroundTraits:(BOOL)arg0 ;
-(id)initWithUseBackgroundTraits:(BOOL)arg0 analyticsIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif