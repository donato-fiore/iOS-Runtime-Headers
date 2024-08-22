// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCACHEDPHOTO_H
#define NTKCACHEDPHOTO_H

@class UIImage;

#import <Foundation/Foundation.h>

#import "NTKPhoto.h"

@interface NTKCachedPhoto : NSObject

@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) NTKPhoto *photo; // ivar: _photo


-(BOOL)load;
-(id)initWithPhoto:(id)arg0 ;
-(id)initWithPhoto:(id)arg0 index:(NSInteger)arg1 ;


@end


#endif