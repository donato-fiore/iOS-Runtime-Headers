// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOBUTTONITEMGROUP_H
#define GEOBUTTONITEMGROUP_H

@class NSArray;


#import "GEOButtonItem.h"
#import "GEOPDGroupParams.h"

@interface GEOButtonItemGroup : GEOButtonItem {
    GEOPDGroupParams *_params;
}


@property (readonly, nonatomic) NSUInteger actionDataIndex;
@property (readonly, nonatomic) NSArray *buttonItems;
@property (readonly, nonatomic) int groupType;


-(id)description;
-(id)initWithGroupParams:(id)arg0 ;
-(int)buttonType;


@end


#endif