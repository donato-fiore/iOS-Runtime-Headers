// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMPHOTOTILE_H
#define CMPHOTOTILE_H


#import <Foundation/Foundation.h>


@interface CMPhotoTile : NSObject

@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (nonatomic) *__IOSurface decodedSurface; // ivar: _decodedSurface
@property (nonatomic) CGRect imageRect; // ivar: _imageRect
@property (retain, nonatomic) id *key; // ivar: _key
@property (nonatomic) BOOL visible; // ivar: _visible


-(id)description;
-(void)dealloc;


@end


#endif