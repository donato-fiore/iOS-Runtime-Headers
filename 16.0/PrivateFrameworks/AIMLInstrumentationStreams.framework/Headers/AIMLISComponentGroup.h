// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIMLISCOMPONENTGROUP_H
#define AIMLISCOMPONENTGROUP_H

@class SIComponentIdentifier, NSArray;

#import <Foundation/Foundation.h>


@interface AIMLISComponentGroup : NSObject {
    ? eventsInternal;
}


@property (nonatomic, readonly) SIComponentIdentifier *componentIdentifier;
@property (nonatomic, readonly) NSArray *events;


-(id)init;


@end


#endif