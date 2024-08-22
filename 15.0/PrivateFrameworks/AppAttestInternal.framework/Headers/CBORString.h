// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBORSTRING_H
#define CBORSTRING_H

@class NSString;


#import "CBORValue.h"

@interface CBORString : CBORValue {
    NSString *m_data;
}




-(NSInteger)compare:(id)arg0 ;
-(id)getLabel;
-(id)initWith:(id)arg0 ;
-(int)fieldType;
-(void)write:(id)arg0 ;


@end


#endif