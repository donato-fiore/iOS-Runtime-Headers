// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTSAFEARRAY_H
#define VTSAFEARRAY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "safeArrayBound.h"

@interface vtSafeArray : NSObject

@property unsigned short cDims; // ivar: _cDims
@property unsigned int cbElementSize; // ivar: _cbElementSize
@property unsigned short fFeatures; // ivar: _fFeatures
@property (retain) safeArrayBound *rgsBoundArr; // ivar: _rgsBoundArr
@property (retain) NSArray *vData; // ivar: _vData


-(id)initWithArray:(id)arg0 ElementSize:(unsigned int)arg1 ;


@end


#endif