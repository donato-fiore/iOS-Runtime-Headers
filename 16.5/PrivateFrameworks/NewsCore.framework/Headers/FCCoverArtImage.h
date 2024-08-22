// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCOVERARTIMAGE_H
#define FCCOVERARTIMAGE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface FCCoverArtImage : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) CGSize dimensions; // ivar: _dimensions


-(id)initWithDimensions:(struct CGSize )arg0 URL:(id)arg1 ;


@end


#endif