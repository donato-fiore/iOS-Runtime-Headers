// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNDELEGATESOURCE_H
#define SCNDELEGATESOURCE_H



#import "SCNImageSource.h"

@interface SCNDelegateSource : SCNImageSource

@property (retain, nonatomic) id *delegate; // ivar: _delegate


-(BOOL)isOpaque;
-(id)textureSource;
-(void)dealloc;


@end


#endif