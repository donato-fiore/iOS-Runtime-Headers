// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISCOMPONENTGROUP_H
#define ISCOMPONENTGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ISComponentIdentifier.h"

@interface ISComponentGroup : NSObject {
    ? eventsInternal;
}


@property (nonatomic, readonly) ISComponentIdentifier *componentIdentifier;
@property (nonatomic, readonly) NSArray *events;


-(id)init;
-(id)initWithEventsBridge:(id)arg0 ;


@end


#endif