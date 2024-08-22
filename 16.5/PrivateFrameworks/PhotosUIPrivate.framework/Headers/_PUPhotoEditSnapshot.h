// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PUPHOTOEDITSNAPSHOT_H
#define _PUPHOTOEDITSNAPSHOT_H

@class PHAdjustmentData, NSData;

#import <Foundation/Foundation.h>


@interface _PUPhotoEditSnapshot : NSObject

@property (retain, nonatomic) PHAdjustmentData *adjustmentData; // ivar: _adjustmentData
@property (retain, nonatomic) NSData *baseImageData; // ivar: _baseImageData
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) NSInteger workImageVersion; // ivar: _workImageVersion


-(id)_copyData:(id)arg0 ;


@end


#endif