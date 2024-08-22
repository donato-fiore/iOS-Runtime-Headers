// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NURAWTONECURVEPROPERTIES_H
#define _NURAWTONECURVEPROPERTIES_H

@class NSData, CIFilter;

#import <Foundation/Foundation.h>


@interface _NURAWToneCurveProperties : NSObject {
    NSData *_curveData;
    CIFilter *_rawTRCFilter;
}




-(float)curveValueAt:(float)arg0 ;
-(id)_generateCurveData;
-(id)curveData;
-(id)initWithToneCurveFilter:(id)arg0 ;


@end


#endif