// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPTPCONVERSIONDESTINATIONASSETREADER_H
#define PLPTPCONVERSIONDESTINATIONASSETREADER_H

@class PHMediaFormatConversionDestination;


#import "PLPTPAssetReader.h"

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader

@property (retain) PHMediaFormatConversionDestination *destination; // ivar: _destination


-(id)dataSourcePathForDataRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)initWithDestination:(id)arg0 ;
-(id)path;


@end


#endif