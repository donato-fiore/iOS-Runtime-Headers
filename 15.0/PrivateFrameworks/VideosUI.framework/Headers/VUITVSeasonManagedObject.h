// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUITVSEASONMANAGEDOBJECT_H
#define VUITVSEASONMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSSet, NSNumber;


#import "VUITVSeriesManagedObject.h"

@interface VUITVSeasonManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *canonicalID;
@property (retain, nonatomic) NSSet *episodes;
@property (copy, nonatomic) NSNumber *seasonNumber;
@property (retain, nonatomic) VUITVSeriesManagedObject *series;
@property (copy, nonatomic) NSString *title;


+(id)fetchRequest;


@end


#endif