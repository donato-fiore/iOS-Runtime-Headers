// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXIMAGEREQUESTDESCRIPTOR_H
#define PXIMAGEREQUESTDESCRIPTOR_H

@class PHImageRequestOptions;
@protocol NSCopying, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXImageRequestDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy, nonatomic) PHImageRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif