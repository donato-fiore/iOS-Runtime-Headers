// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIORANGEASVALUE_H
#define MIORANGEASVALUE_H

@class NSValue;



@interface MIORangeAsValue : NSValue {
    _MIORange _range;
}




+(id)valueWithMIORange:(struct _MIORange )arg0 ;
-(char *)objCType;
-(struct _MIORange )MIORangeValue;
-(void)getValue:(*void)arg0 ;


@end


#endif