// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXWEBCONTENTCOMPONENTINTERACTIONHANDLERFACTORY_H
#define SXWEBCONTENTCOMPONENTINTERACTIONHANDLERFACTORY_H

@class NSString;
@protocol SXWebContentComponentInteractionHandlerFactory;

#import <Foundation/Foundation.h>


@interface SXWebContentComponentInteractionHandlerFactory : NSObject <SXWebContentComponentInteractionHandlerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)componentInteractionHandlerForInteraction:(id)arg0 ;


@end


#endif