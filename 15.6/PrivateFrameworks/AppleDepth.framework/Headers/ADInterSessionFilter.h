// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADINTERSESSIONFILTER_H
#define ADINTERSESSIONFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ADInterSessionFilterParameters.h"

@interface ADInterSessionFilter : NSObject {
    unsigned int _version;
    ADInterSessionFilterParameters *_params;
    deque<Node *, std::allocator<Node *>> _nodes;
    BOOL _isStepDetected;
    NSArray *_fieldNames;
}




-(NSInteger)fillWithDictionaryRepresentation:(id)arg0 ;
-(NSInteger)fillWithEntry:(id)arg0 ;
-(NSInteger)insertEntry:(id)arg0 withWeight:(CGFloat)arg1 ;
-(id)calculate;
-(id)dictionaryRepresentation;
-(id)initWithFieldNames:(id)arg0 parameters:(id)arg1 ;
-(id)insertEntryAndCalculate:(id)arg0 withWeight:(CGFloat)arg1 ;


@end


#endif