// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OUCONFIGURATION_H
#define OUCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OUConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL enableMLRefinement; // ivar: enableMLRefinement
@property (nonatomic) BOOL enableRgbRefinement; // ivar: enableRgbRefinement
@property (nonatomic) float maxFramerate; // ivar: maxFramerate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithframerate:(float)arg0 rgbRefinemnt:(BOOL)arg1 mlRefinement:(BOOL)arg2 ;


@end


#endif