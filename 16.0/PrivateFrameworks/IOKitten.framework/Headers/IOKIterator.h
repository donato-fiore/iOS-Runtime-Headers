// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOKITERATOR_H
#define IOKITERATOR_H



#import "IOKObject.h"

@interface IOKIterator : IOKObject {
    id *_enumerationBlock;
}


@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithIOObject:(unsigned int)arg0 ;
-(id)initWithIterator:(unsigned int)arg0 ;
-(id)initWithIterator:(unsigned int)arg0 enumerationBlock:(id)arg1 ;
-(id)nextObject;
-(void)enumerate;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)reset;


@end


#endif