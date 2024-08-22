// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVDCAPABILITY_H
#define SVDCAPABILITY_H

@class NSString;
@protocol SVDCapabilityMatching, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVDCapability : NSObject <SVDCapabilityMatching, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)matchesCapabilityDescriptions:(id)arg0 ;
-(id)_swiftBacking;
-(id)initWithCoder:(id)arg0 ;
-(id)key;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif