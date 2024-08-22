// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBAPPLICATIONTERMINATIONASSERTION_H
#define FBAPPLICATIONTERMINATIONASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FBApplicationTerminationAssertion : NSObject

@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) id *plugInHoldToken; // ivar: _plugInHoldToken
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSUInteger serialNumber; // ivar: _serialNumber


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif