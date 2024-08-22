// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISEMBOSSEDEFFECT_H
#define ISEMBOSSEDEFFECT_H

@class NSString;
@protocol ISEffect;

#import <Foundation/Foundation.h>


@interface ISEmbossedEffect : NSObject <ISEffect>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGSize offset; // ivar: _offset
@property CGFloat range; // ivar: _range
@property (readonly) Class superclass;
@property NSUInteger variant; // ivar: _variant


-(id)filterWithBackgroundImage:(id)arg0 inputImage:(id)arg1 ;
-(id)init;


@end


#endif