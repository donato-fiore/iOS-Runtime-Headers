// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKUITEXTURE_H
#define CLKUITEXTURE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CLKUIAtlas.h"

@interface CLKUITexture : NSObject {
    ? _rect;
}


@property (readonly, nonatomic) CLKUIAtlas *atlas; // ivar: _atlas
@property ? rect;
@property (readonly, nonatomic) NSUInteger status;
@property (readonly, nonatomic) NSString *uuid;


+(id)textureWithProviderDelegate:(id)arg0 uuid:(id)arg1 ;
+(id)textureWithProviderDelegate:(id)arg0 uuid:(id)arg1 rect;
-(id)initWithAtlas:(id)arg0 rect;


@end


#endif