// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPROPERTYVALUEPUBLISHER_H
#define AVPROPERTYVALUEPUBLISHER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVPublisher.h"

@interface AVPropertyValuePublisher : AVPublisher {
    NSObject *_object;
    NSString *_key;
    NSString *_notificationName;
}




+(id)propertyValuePublisherWithObject:(id)arg0 key:(id)arg1 notificationName:(id)arg2 ;
-(id)description;
-(id)initWithObject:(id)arg0 key:(id)arg1 notificationName:(id)arg2 ;
-(id)subscribeRequestingInitialValue:(BOOL)arg0 block:(id)arg1 ;
-(void)dealloc;


@end


#endif