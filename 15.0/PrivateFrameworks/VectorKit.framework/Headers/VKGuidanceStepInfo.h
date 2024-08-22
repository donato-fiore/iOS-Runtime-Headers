// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKGUIDANCESTEPINFO_H
#define VKGUIDANCESTEPINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKGuidanceStepInfo : NSObject

@property (readonly, retain, nonatomic) NSString *roadName; // ivar: _roadName
@property (readonly, nonatomic) int routePoint; // ivar: _routePoint


-(id)initWithRoadName:(id)arg0 point:(int)arg1 ;
-(void)dealloc;


@end


#endif