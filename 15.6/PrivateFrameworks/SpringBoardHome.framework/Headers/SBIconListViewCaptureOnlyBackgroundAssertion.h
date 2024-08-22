// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTVIEWCAPTUREONLYBACKGROUNDASSERTION_H
#define SBICONLISTVIEWCAPTUREONLYBACKGROUNDASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBIcon.h"

@interface SBIconListViewCaptureOnlyBackgroundAssertion : NSObject <BSInvalidatable>

 {
    id *_invalidationBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIcon *icon; // ivar: _icon
@property (readonly) Class superclass;


-(id)initWithIcon:(id)arg0 groupName:(id)arg1 invalidation:(id)arg2 ;
-(void)invalidate;


@end


#endif