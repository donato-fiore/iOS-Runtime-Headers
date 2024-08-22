// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFEEDTESTSECTIONINFO_H
#define PXFEEDTESTSECTIONINFO_H

@class PLPhotoLibrary;


#import "PXFeedSectionInfo.h"

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}


@property (readonly, nonatomic) NSInteger countOfItems; // ivar: _countOfItems


-(BOOL)isLoaded;
-(NSInteger)numberOfItems;
-(NSInteger)sectionType;
-(id)albumTitle;
-(id)captionForItemAtIndex:(NSInteger)arg0 ;
-(id)date;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)photoLibrary;


@end


#endif