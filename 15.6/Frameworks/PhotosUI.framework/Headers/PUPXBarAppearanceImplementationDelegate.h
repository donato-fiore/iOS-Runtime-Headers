// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPXBARAPPEARANCEIMPLEMENTATIONDELEGATE_H
#define PUPXBARAPPEARANCEIMPLEMENTATIONDELEGATE_H

@class NSString;
@protocol PXBarAppearanceImplementationDelegate;

#import <Foundation/Foundation.h>


@interface PUPXBarAppearanceImplementationDelegate : NSObject <PXBarAppearanceImplementationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)barAppearanceIsStatusBarVisible:(id)arg0 ;


@end


#endif