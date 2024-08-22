// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUNONANIMATINGLAYERDELEGATE_H
#define TUNONANIMATINGLAYERDELEGATE_H

@class NSString;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface TUNonAnimatingLayerDelegate : NSObject <CALayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;


@end


#endif