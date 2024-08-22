// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUVIEWCONTROLLERREGISTRY_H
#define HUVIEWCONTROLLERREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HUViewControllerRegistry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *viewControllerClassesByIdentifier; // ivar: _viewControllerClassesByIdentifier


+(id)sharedInstance;
-(Class)viewControllerClassForIdentifier:(id)arg0 ;
-(id)init;
-(void)registerViewControllerClass:(Class)arg0 forIdentifier:(id)arg1 ;


@end


#endif