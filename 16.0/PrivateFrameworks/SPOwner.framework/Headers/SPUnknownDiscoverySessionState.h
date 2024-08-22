// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUNKNOWNDISCOVERYSESSIONSTATE_H
#define SPUNKNOWNDISCOVERYSESSIONSTATE_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPUnknownDiscoverySessionState : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSSet *unknownAccessories; // ivar: _unknownAccessories


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnknownAccessories:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif