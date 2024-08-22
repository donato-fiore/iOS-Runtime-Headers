// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPUNKNOWNFIELDDATAREFERENCE_H
#define TSPUNKNOWNFIELDDATAREFERENCE_H

@class NSArray;


#import "TSPUnknownField.h"

@interface TSPUnknownFieldDataReference : TSPUnknownField {
    NSArray *_datas;
}




-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif