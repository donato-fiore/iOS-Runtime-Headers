// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECCBORUNSIGNED_H
#define SECCBORUNSIGNED_H



#import "SecCBORValue.h"

@interface SecCBORUnsigned : SecCBORValue {
    NSUInteger m_data;
}




-(NSInteger)compare:(id)arg0 ;
-(id)getLabel;
-(id)initWith:(NSUInteger)arg0 ;
-(int)fieldType;
-(void)write:(id)arg0 ;


@end


#endif