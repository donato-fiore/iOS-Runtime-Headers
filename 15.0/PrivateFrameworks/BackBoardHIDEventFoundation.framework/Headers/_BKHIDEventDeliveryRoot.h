// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BKHIDEVENTDELIVERYROOT_H
#define _BKHIDEVENTDELIVERYROOT_H

@class NSString, NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface _BKHIDEventDeliveryRoot : NSObject {
    NSString *_identifier;
    NSArray *_dispatchingRules;
    NSSet *_resolutions;
}




-(id)description;


@end


#endif