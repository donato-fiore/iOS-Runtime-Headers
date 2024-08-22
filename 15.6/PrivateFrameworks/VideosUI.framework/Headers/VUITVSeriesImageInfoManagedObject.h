// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUITVSERIESIMAGEINFOMANAGEDOBJECT_H
#define VUITVSERIESIMAGEINFOMANAGEDOBJECT_H



#import "VUIImageInfoManagedObject.h"
#import "VUITVSeriesManagedObject.h"

@interface VUITVSeriesImageInfoManagedObject : VUIImageInfoManagedObject

@property (retain, nonatomic) VUITVSeriesManagedObject *series;


+(id)fetchRequest;


@end


#endif