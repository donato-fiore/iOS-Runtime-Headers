// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPUNKNOWNFIELDOBJECTREFERENCE_H
#define TSPUNKNOWNFIELDOBJECTREFERENCE_H



#import "TSPUnknownField.h"
#import "TSPLazyReferenceArray.h"

@interface TSPUnknownFieldObjectReference : TSPUnknownField {
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
}




-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif