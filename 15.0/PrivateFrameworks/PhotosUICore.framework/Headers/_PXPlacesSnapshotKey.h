// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXPLACESSNAPSHOTKEY_H
#define _PXPLACESSNAPSHOTKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PXPlacesSnapshotKey : NSObject <NSCopying>



@property (readonly, nonatomic) CGSize _imageSize; // ivar: __imageSize
@property (readonly, nonatomic) NSInteger _userInterfaceStyle; // ivar: __userInterfaceStyle


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImageSize:(struct CGSize )arg0 userInterfaceStyle:(NSInteger)arg1 ;


@end


#endif