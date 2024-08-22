// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWINTERACTIONFACTORY_H
#define SWINTERACTIONFACTORY_H

@class NSString;
@protocol SWInteractionFactory, SWNavigationManager;

#import <Foundation/Foundation.h>


@interface SWInteractionFactory : NSObject <SWInteractionFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWNavigationManager> *navigationManager; // ivar: _navigationManager
@property (readonly) Class superclass;


-(id)initWithNavigationManager:(id)arg0 ;
-(id)interactionForDictionary:(id)arg0 ;


@end


#endif