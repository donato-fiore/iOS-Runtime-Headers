// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPKNOWNFIELDREPEATEDDATAREFERENCE_H
#define TSPKNOWNFIELDREPEATEDDATAREFERENCE_H

@class NSArray;


#import "TSPKnownFieldRepeatedStringValue.h"

@interface TSPKnownFieldRepeatedDataReference : TSPKnownFieldRepeatedStringValue {
    NSArray *_allData;
}




-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif