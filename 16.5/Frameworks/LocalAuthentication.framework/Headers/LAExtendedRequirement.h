// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAEXTENDEDREQUIREMENT_H
#define LAEXTENDEDREQUIREMENT_H

@class NSDictionary;
@protocol LAACLSerializable;

#import <Foundation/Foundation.h>


@interface LAExtendedRequirement : NSObject <LAACLSerializable>

 {
    NSDictionary *_constraint;
}




+(id)applicationRemainsForegroundRequirement;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)encodeWithACLCoder:(id)arg0 ;


@end


#endif