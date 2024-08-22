// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPKNOWNFIELDOBJECTREFERENCE_H
#define TSPKNOWNFIELDOBJECTREFERENCE_H



#import "TSPKnownFieldStringValue.h"
#import "TSPLazyReference.h"

@interface TSPKnownFieldObjectReference : TSPKnownFieldStringValue {
    TSPLazyReference *_reference;
}




-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif