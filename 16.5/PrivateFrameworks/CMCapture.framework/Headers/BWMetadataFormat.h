// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMETADATAFORMAT_H
#define BWMETADATAFORMAT_H



#import "BWFormat.h"

@interface BWMetadataFormat : BWFormat {
    *opaqueCMFormatDescription _desc;
}




+(id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(void)initialize;
-(id)debugDescription;
-(id)description;
-(struct opaqueCMFormatDescription *)formatDescription;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif