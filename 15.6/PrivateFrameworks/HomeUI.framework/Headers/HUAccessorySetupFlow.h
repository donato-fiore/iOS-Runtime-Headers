// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYSETUPFLOW_H
#define HUACCESSORYSETUPFLOW_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface HUAccessorySetupFlow : NSObject

@property (readonly, copy, nonatomic) NSArray *homeKitObjects; // ivar: _homeKitObjects
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)description;
-(id)initWithType:(id)arg0 homeKitObjects:(id)arg1 ;


@end


#endif