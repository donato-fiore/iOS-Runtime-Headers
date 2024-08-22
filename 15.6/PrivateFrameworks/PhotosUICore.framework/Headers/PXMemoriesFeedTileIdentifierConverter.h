// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORIESFEEDTILEIDENTIFIERCONVERTER_H
#define PXMEMORIESFEEDTILEIDENTIFIERCONVERTER_H



#import "PXSectionedTileIdentifierConverter.h"

@interface PXMemoriesFeedTileIdentifierConverter : PXSectionedTileIdentifierConverter



-(BOOL)_shouldConvertIdentifierFromMemory:(id)arg0 toMemory:(id)arg1 ;
-(BOOL)_shouldConvertIdentifierFromMemoryInfo:(id)arg0 toMemoryInfo:(id)arg1 ;
-(BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg0 ;
-(BOOL)transformTileIdentifier:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 ;


@end


#endif