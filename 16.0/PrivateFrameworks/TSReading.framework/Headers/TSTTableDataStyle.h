// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATASTYLE_H
#define TSTTABLEDATASTYLE_H



#import "TSTTableDataObject.h"
#import "TSSStyle.h"

@interface TSTTableDataStyle : TSTTableDataObject {
    TSSStyle *mStyle;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initObjectWithStyle:(id)arg0 ;
-(void)dealloc;


@end


#endif