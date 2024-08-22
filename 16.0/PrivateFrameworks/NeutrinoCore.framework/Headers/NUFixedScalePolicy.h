// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUFIXEDSCALEPOLICY_H
#define NUFIXEDSCALEPOLICY_H

@class NSString;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface NUFixedScalePolicy : NSObject <NUScalePolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) ? scale; // ivar: _scale
@property (readonly) Class superclass;


+(id)oneToOneScalePolicy;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithScale:(struct ? )arg0 ;
-(struct ? )scaleForImageSize:(struct ? )arg0 ;


@end


#endif