// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABVCARDCARDDAVRECORD_H
#define ABVCARDCARDDAVRECORD_H



#import "ABVCardRecord.h"

@interface ABVCardCardDAVRecord : ABVCardRecord



+(BOOL)includeABClipRectInVCardPhotos;
+(BOOL)includeImageURIInVCards;
+(BOOL)includeNotesInVCards;
+(BOOL)includeREVInVCards;
-(BOOL)useThumbnailImageFormatIfAvailable;


@end


#endif