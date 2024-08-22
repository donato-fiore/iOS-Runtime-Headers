// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWMETADATAFORMAT_H
#define BWMETADATAFORMAT_H



#import "BWFormat.h"

@interface BWMetadataFormat : BWFormat {
    *opaqueCMFormatDescription _desc;
}




+(id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
+(void)initialize;
-(id)_initWithMetadataFormat:(struct opaqueCMFormatDescription *)arg0 ;
-(id)debugDescription;
-(id)description;
-(struct opaqueCMFormatDescription *)formatDescription;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif