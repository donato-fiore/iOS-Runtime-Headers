// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBACTIONDISABLINGCALAYERDELEGATE_H
#define WEBACTIONDISABLINGCALAYERDELEGATE_H

@class NSString;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface WebActionDisablingCALayerDelegate : NSObject <CALayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;


@end


#endif