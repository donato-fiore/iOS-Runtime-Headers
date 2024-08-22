// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABVCARDPERSONVALUESETTER_H
#define ABVCARDPERSONVALUESETTER_H



#import "ABVCardValueSetter.h"

@interface ABVCardPersonValueSetter : ABVCardValueSetter {
    *void _person;
    *__CFArray _properties;
}




+(struct __CFArray *)supportedProperties;
-(*void)valueForProperty:(unsigned int)arg0 ;
-(BOOL)setImageData:(id)arg0 cropRectX:(int)arg1 cropRectY:(int)arg2 cropRectWidth:(int)arg3 cropRectHeight:(int)arg4 ;
-(BOOL)setValue:(*void)arg0 forProperty:(unsigned int)arg1 ;
-(id)fullName;
-(id)imageData;
-(id)initWithPerson:(*void)arg0 ;
-(struct __CFArray *)foundProperties;
-(void)dealloc;
-(void)setValueInTemporaryCache:(id)arg0 forProperty:(unsigned int)arg1 ;


@end


#endif