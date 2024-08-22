// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVFIGOBJECTINSPECTOR_H
#define AVFIGOBJECTINSPECTOR_H


#import <Foundation/Foundation.h>


@interface AVFigObjectInspector : NSObject



+(void)initialize;
-(*void)_valueAsCFTypeForProperty:(struct __CFString *)arg0 ;
-(NSInteger)_longLongForProperty:(struct __CFString *)arg0 ;
-(float)_floatForProperty:(struct __CFString *)arg0 ;
-(float)_floatForProperty:(struct __CFString *)arg0 defaultValue:(float)arg1 ;
-(id)_arrayForProperty:(struct __CFString *)arg0 ;
-(id)_dataForProperty:(struct __CFString *)arg0 ;
-(id)_dictionaryForProperty:(struct __CFString *)arg0 ;
-(id)_nonNilArrayForProperty:(struct __CFString *)arg0 ;
-(id)_nonNilDictionaryForProperty:(struct __CFString *)arg0 ;
-(id)_stringForProperty:(struct __CFString *)arg0 ;
-(id)_tollFreeBridgedObjectForProperty:(struct __CFString *)arg0 ;
-(int)_SInt32ForProperty:(struct __CFString *)arg0 ;
-(short)_SInt16ForProperty:(struct __CFString *)arg0 ;
-(struct ? )_timeForProperty:(struct __CFString *)arg0 ;
-(struct ? )_timeForProperty:(struct __CFString *)arg0 defaultValue:(struct ? )arg1 ;
-(struct ? )_timeRangeForProperty:(struct __CFString *)arg0 ;
-(struct CGAffineTransform )_affineTransformForProperty:(struct __CFString *)arg0 ;
-(struct CGSize )_sizeForProperty:(struct __CFString *)arg0 ;
-(struct CGSize )_sizeForProperty:(struct __CFString *)arg0 defaultValue:(struct CGSize )arg1 ;
-(unsigned char)_booleanForProperty:(struct __CFString *)arg0 ;


@end


#endif