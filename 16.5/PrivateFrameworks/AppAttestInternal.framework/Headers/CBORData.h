// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBORDATA_H
#define CBORDATA_H

@class NSData;


#import "CBORValue.h"

@interface CBORData : CBORValue {
    NSData *m_data;
}




-(id)initWith:(id)arg0 ;
-(int)fieldType;
-(void)write:(id)arg0 ;


@end


#endif