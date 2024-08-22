// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECCBORNEGATIVE_H
#define SECCBORNEGATIVE_H



#import "SecCBORValue.h"

@interface SecCBORNegative : SecCBORValue {
    NSInteger m_data;
}




-(NSInteger)compare:(id)arg0 ;
-(id)getLabel;
-(id)initWith:(NSInteger)arg0 ;
-(int)fieldType;
-(void)write:(id)arg0 ;


@end


#endif