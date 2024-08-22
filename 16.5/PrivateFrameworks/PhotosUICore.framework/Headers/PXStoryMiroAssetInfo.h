// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMIROASSETINFO_H
#define PXSTORYMIROASSETINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PXStoryMiroAssetInfo : NSObject

@property (readonly, nonatomic) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (nonatomic) BOOL isUsed; // ivar: _isUsed


+(id)infoForUsedPhoto;
+(id)infoWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;


@end


#endif