// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STPROPVARIANT_H
#define STPROPVARIANT_H


#import <Foundation/Foundation.h>


@interface STPropVariant : NSObject {
    _SsrwPropVariant mProp;
}




-(id)asDataOfType:(*int)arg0 ;
-(struct _SsrwPropVariant *)propVariant;
-(void)dealloc;
-(void)setBlobValue:(id)arg0 ;
-(void)setLongValue:(int)arg0 ;
-(void)setShortValue:(short)arg0 ;
-(void)setStringValue:(id)arg0 ;


@end


#endif