// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMULTIRESOLUTIONIMAGE_H
#define FCMULTIRESOLUTIONIMAGE_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCMultiResolutionImage : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *imageURL1x; // ivar: _imageURL1x
@property (retain, nonatomic) NSURL *imageURL2x; // ivar: _imageURL2x
@property (retain, nonatomic) NSURL *imageURL3x; // ivar: _imageURL3x


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithImageURL1X:(id)arg0 imageURL2X:(id)arg1 imageURL3X:(id)arg2 ;


@end


#endif