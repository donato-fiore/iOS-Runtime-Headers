// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATAMULTIPLECHOICELIST_H
#define TSTTABLEDATAMULTIPLECHOICELIST_H

@class TSTPopUpMenuModel;


#import "TSTTableDataObject.h"

@interface TSTTableDataMultipleChoiceList : TSTTableDataObject {
    TSTPopUpMenuModel *mPopUpMenuModel;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initObjectWithPopUpMenuModel:(id)arg0 ;
-(void)dealloc;


@end


#endif