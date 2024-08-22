// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CRKCARDSECTIONVIEWCONTROLLERFACTORY_H
#define _CRKCARDSECTIONVIEWCONTROLLERFACTORY_H


#import <Foundation/Foundation.h>

#import "_CRKCardSectionViewControllerRegistry.h"

@interface _CRKCardSectionViewControllerFactory : NSObject {
    _CRKCardSectionViewControllerRegistry *_registry;
}




+(id)_sharedInstance;
+(id)cardSectionViewControllerForCardSection:(id)arg0 ;
+(void)registerCardSectionViewControllerClass:(Class)arg0 ;
-(id)_cardSectionViewControllerForCardSection:(id)arg0 ;
-(id)init;
-(void)_registerCardSectionViewControllerClass:(Class)arg0 ;


@end


#endif