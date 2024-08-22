// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODDWHEN_H
#define ODDWHEN_H



#import "ODDLayoutObjectList.h"
#import "ODDIteratorSpecification.h"

@interface ODDWhen : ODDLayoutObjectList {
    ODDIteratorSpecification *mIteratorSpecification;
}




-(id)description;
-(id)init;
-(id)iteratorSpecification;


@end


#endif