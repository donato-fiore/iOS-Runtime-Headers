// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONCONTROLLERVISUALSTYLEFACTORY_H
#define _UINAVIGATIONCONTROLLERVISUALSTYLEFACTORY_H

@class NSString;
@protocol _UINavigationControllerVisualStyleProviding;

#import <Foundation/Foundation.h>


@interface _UINavigationControllerVisualStyleFactory : NSObject <_UINavigationControllerVisualStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<_UINavigationControllerVisualStyleProviding> *visualStyleProvider; // ivar: _visualStyleProvider


+(id)sharedInstance;
-(id)init;
-(id)styleForNavigationController:(id)arg0 ;
-(void)registerVisualStyleProvider:(id)arg0 ;


@end


#endif