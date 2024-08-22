// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMANAGEDPUBLICEVENTPERFORMER_H
#define CLSMANAGEDPUBLICEVENTPERFORMER_H

@class NSManagedObject, NSString;


#import "CLSManagedPublicEvent.h"

@interface CLSManagedPublicEventPerformer : NSManagedObject

@property (retain, nonatomic) NSString *iTunesIdentifier;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) CLSManagedPublicEvent *publicEvent;


+(id)entityName;


@end


#endif