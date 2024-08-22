// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPINTENTWITHSINGLEENTITY_H
#define UPINTENTWITHSINGLEENTITY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UPEntityWithValue.h"

@interface UPIntentWithSingleEntity : NSObject

@property (readonly) UPEntityWithValue *entity; // ivar: _entity
@property (readonly) NSString *intent; // ivar: _intent


-(BOOL)isEqualToIntentWithSingleEntity:(id)arg0 ;
-(id)initWithIntent:(id)arg0 singleEntity:(id)arg1 ;


@end


#endif