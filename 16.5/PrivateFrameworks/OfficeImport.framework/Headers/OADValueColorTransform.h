// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADVALUECOLORTRANSFORM_H
#define OADVALUECOLORTRANSFORM_H



#import "OADColorTransform.h"

@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)value;
-(void)setValue:(float)arg0 ;


@end


#endif