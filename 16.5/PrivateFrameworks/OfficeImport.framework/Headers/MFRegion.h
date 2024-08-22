// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFREGION_H
#define MFREGION_H

@protocol MFObject;

#import <Foundation/Foundation.h>


@interface MFRegion : NSObject <MFObject>





-(id)pathForClippingWithDeviceContext:(id)arg0 ;
-(int)fill:(id)arg0 in_brush:(id)arg1 ;
-(int)frame:(id)arg0 in_brush:(id)arg1 ;
-(int)invert:(id)arg0 ;
-(int)selectInto:(id)arg0 ;


@end


#endif