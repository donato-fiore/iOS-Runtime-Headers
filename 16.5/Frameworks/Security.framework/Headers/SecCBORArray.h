// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECCBORARRAY_H
#define SECCBORARRAY_H

@class NSMutableArray;


#import "SecCBORValue.h"

@interface SecCBORArray : SecCBORValue {
    NSMutableArray *m_data;
}




-(id)init;
-(id)initWith:(id)arg0 ;
-(int)fieldType;
-(void)addObject:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif