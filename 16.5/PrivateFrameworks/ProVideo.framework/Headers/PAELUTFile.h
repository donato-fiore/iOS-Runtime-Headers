// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAELUTFILE_H
#define PAELUTFILE_H



#import "PAEPhotosFilters.h"

@interface PAELUTFile : PAEPhotosFilters



-(BOOL)addParameters;
-(id)initWithAPIManager:(id)arg0 ;
-(struct HGRef<HGBitmap> )lutBitmapForFilter:(int)arg0 lutDimensions:(*int)arg1 ;


@end


#endif