// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDAPPSEGMENTINFO_H
#define AMDAPPSEGMENTINFO_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface AMDAppSegmentInfo : NSObject

@property (retain) NSString *appIdentifier; // ivar: _appIdentifier
@property (retain) NSSet *segments; // ivar: _segments


-(BOOL)isEqualToApp:(id)arg0 ;
-(id)initWithAppIdentifier:(id)arg0 andSegments:(id)arg1 ;


@end


#endif