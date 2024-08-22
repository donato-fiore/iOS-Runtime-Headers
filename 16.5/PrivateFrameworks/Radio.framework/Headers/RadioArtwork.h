// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RADIOARTWORK_H
#define RADIOARTWORK_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RadioArtwork : NSObject <NSCopying>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, nonatomic) CGSize pointSize;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArtworkDictionary:(id)arg0 ;
-(id)initWithArtworkURL:(id)arg0 pixelSize:(struct CGSize )arg1 ;


@end


#endif