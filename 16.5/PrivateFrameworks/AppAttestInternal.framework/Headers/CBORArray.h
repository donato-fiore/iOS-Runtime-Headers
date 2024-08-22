// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBORARRAY_H
#define CBORARRAY_H

@class NSMutableArray;


#import "CBORValue.h"

@interface CBORArray : CBORValue {
    NSMutableArray *m_data;
}




-(id)init;
-(id)initWith:(id)arg0 ;
-(int)fieldType;
-(void)addObject:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif