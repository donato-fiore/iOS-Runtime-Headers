// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SECCBORDATA_H
#define SECCBORDATA_H

@class NSData;


#import "SecCBORValue.h"

@interface SecCBORData : SecCBORValue {
    NSData *m_data;
}




-(id)initWith:(id)arg0 ;
-(int)fieldType;
-(void)write:(id)arg0 ;


@end


#endif