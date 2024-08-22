// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPIMAGEOBJECTDATA_H
#define CPIMAGEOBJECTDATA_H


#import <Foundation/Foundation.h>


@interface CPImageObjectData : NSObject

@property CGRect boundsOnPage; // ivar: _boundsOnPage
@property (retain) *CGImage image; // ivar: _image


+(id)imageObjectDataWithCGImage:(struct CGImage *)arg0 andBounds:(struct CGRect )arg1 ;
-(id)initWithCGImage:(struct CGImage *)arg0 andBoundsOnPage:(struct CGRect )arg1 ;
-(void)dealloc;


@end


#endif