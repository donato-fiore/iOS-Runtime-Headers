// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECCBORSTRING_H
#define SECCBORSTRING_H

@class NSString;


#import "SecCBORValue.h"

@interface SecCBORString : SecCBORValue {
    NSString *m_data;
}




-(NSInteger)compare:(id)arg0 ;
-(id)getLabel;
-(id)initWith:(id)arg0 ;
-(int)fieldType;
-(void)write:(id)arg0 ;


@end


#endif