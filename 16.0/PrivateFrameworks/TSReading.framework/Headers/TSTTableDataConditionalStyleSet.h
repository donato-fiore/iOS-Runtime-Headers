// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATACONDITIONALSTYLESET_H
#define TSTTABLEDATACONDITIONALSTYLESET_H

@class TSTConditionalStyleSet;


#import "TSTTableDataObject.h"

@interface TSTTableDataConditionalStyleSet : TSTTableDataObject {
    TSTConditionalStyleSet *mConditionalStyleSet;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initObjectWithConditionalStyleSet:(id)arg0 ;
-(void)dealloc;


@end


#endif