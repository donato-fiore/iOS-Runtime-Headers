// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNAMEDLOI_H
#define ATXNAMEDLOI_H

@class NSString;


#import "ATXLocationOfInterest.h"

@interface ATXNamedLOI : ATXLocationOfInterest {
    NSString *_name;
}




-(id)description;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif