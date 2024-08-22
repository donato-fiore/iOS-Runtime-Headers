// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHANIMATEDIMAGEREQUESTOPTIONS_H
#define PHANIMATEDIMAGEREQUESTOPTIONS_H



#import "PHImageRequestOptions.h"

@interface PHAnimatedImageRequestOptions : PHImageRequestOptions

@property (nonatomic) BOOL allowPreCaching; // ivar: _allowPreCaching
@property (nonatomic) BOOL useSharedImageDecoding; // ivar: _useSharedImageDecoding


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif