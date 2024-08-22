// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPERCENTDRIVENINTERACTIONEFFECT_H
#define _UIPERCENTDRIVENINTERACTIONEFFECT_H

@class NSString;
@protocol UIInteractionEffect;

#import <Foundation/Foundation.h>


@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly) Class superclass;


-(id)initWithProgressBlock:(id)arg0 ;
-(void)interaction:(id)arg0 didChangeWithContext:(id)arg1 ;


@end


#endif