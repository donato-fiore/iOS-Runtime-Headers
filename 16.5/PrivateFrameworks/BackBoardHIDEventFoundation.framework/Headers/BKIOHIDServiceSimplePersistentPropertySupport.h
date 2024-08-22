// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKIOHIDSERVICESIMPLEPERSISTENTPROPERTYSUPPORT_H
#define BKIOHIDSERVICESIMPLEPERSISTENTPROPERTYSUPPORT_H

@class BKSHIDEventSenderDescriptor, NSString;
@protocol BKIOHIDServiceMatchObserver, BKIOHIDServicePersistentPropertyHandling, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BKIOHIDServiceMatcher.h"
#import "BKIOHIDServicePersistentPropertyController.h"

@interface BKIOHIDServiceSimplePersistentPropertySupport : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServicePersistentPropertyHandling, BSInvalidatable>

 {
    BKIOHIDServiceMatcher *_matcher;
    BKIOHIDServicePersistentPropertyController *_persistentPropertyController;
    BKSHIDEventSenderDescriptor *_senderDescriptor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)setPersistentProperties:(id)arg0 forServicesMatchingDescriptor:(id)arg1 ;
-(id)initWithSenderDescriptor:(id)arg0 matcherDataProvider:(id)arg1 persistentPropertyController:(id)arg2 ;
-(void)invalidate;
-(void)matcher:(id)arg0 servicesDidMatch:(id)arg1 ;


@end


#endif