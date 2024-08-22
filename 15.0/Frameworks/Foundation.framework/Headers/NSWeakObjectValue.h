// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSWEAKOBJECTVALUE_H
#define NSWEAKOBJECTVALUE_H



#import "NSValue.h"

@interface NSWeakObjectValue : NSValue {
    *void _value;
    id *_object;
    BOOL _useFallback;
}




-(BOOL)isEqualToValue:(id)arg0 ;
-(NSUInteger)hash;
-(char *)objCType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)nonretainedObjectValue;
-(id)weakObjectValue;
-(void)dealloc;
-(void)getValue:(*void)arg0 ;
-(void)getValue:(*void)arg0 size:(NSUInteger)arg1 ;


@end


#endif