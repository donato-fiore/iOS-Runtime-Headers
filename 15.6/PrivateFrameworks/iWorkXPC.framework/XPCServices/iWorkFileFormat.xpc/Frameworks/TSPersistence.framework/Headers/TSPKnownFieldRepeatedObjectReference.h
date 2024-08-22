// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPKNOWNFIELDREPEATEDOBJECTREFERENCE_H
#define TSPKNOWNFIELDREPEATEDOBJECTREFERENCE_H



#import "TSPKnownFieldRepeatedStringValue.h"
#import "TSPLazyReferenceArray.h"

@interface TSPKnownFieldRepeatedObjectReference : TSPKnownFieldRepeatedStringValue {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
}




-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif