// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPATHEVENT_H
#define NEPATHEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NEPathEvent : NSObject

@property (readonly) NSString *bundleID; // ivar: _bundleID
@property (readonly) NSInteger type; // ivar: _type


-(id)initWithType:(NSInteger)arg0 bundleID:(id)arg1 ;


@end


#endif