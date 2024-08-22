// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSMANAGEDPUBLICEVENTCATEGORY_H
#define CLSMANAGEDPUBLICEVENTCATEGORY_H

@class NSManagedObject, NSString;


#import "CLSManagedPublicEvent.h"

@interface CLSManagedPublicEventCategory : NSManagedObject

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) CLSManagedPublicEvent *event;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *localizedSubcategories;


+(id)entityName;


@end


#endif