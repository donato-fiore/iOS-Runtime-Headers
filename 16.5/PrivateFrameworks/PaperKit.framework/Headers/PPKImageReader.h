// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPKIMAGEREADER_H
#define PPKIMAGEREADER_H


#import <Foundation/Foundation.h>


@interface PPKImageReader : NSObject



+(id)_privateImageMetadataDescriptors;
-(id)_readAnnotationsFromDataProvider:(struct CGDataProvider *)arg0 ;
-(id)_readDataFromTagAtPath:(id)arg0 inMetadata:(struct CGImageMetadata *)arg1 ;


@end


#endif