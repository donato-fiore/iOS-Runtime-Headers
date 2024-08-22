// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISDIMMEDEFFECT_H
#define ISDIMMEDEFFECT_H

@class NSString;
@protocol ISEffect;

#import <Foundation/Foundation.h>


@interface ISDimmedEffect : NSObject <ISEffect>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)filterWithBackgroundImage:(id)arg0 inputImage:(id)arg1 ;


@end


#endif