// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPLAZYREFERENCEFROMDATATOOBJECT_H
#define TSPLAZYREFERENCEFROMDATATOOBJECT_H



#import "TSPLazyReference.h"

@interface TSPLazyReferenceFromDataToObject : TSPLazyReference

@property (readonly, nonatomic) NSInteger referenceCount; // ivar: _referenceCount


-(id)additionalDescription;
-(id)initWithDelegate:(id)arg0 identifier:(NSInteger)arg1 referenceCount:(NSInteger)arg2 ;


@end


#endif