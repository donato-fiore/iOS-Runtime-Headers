// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CRKCARDSECTIONVIEWCONTROLLERREGISTRY_H
#define _CRKCARDSECTIONVIEWCONTROLLERREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CRKCardSectionViewControllerRegistry : NSObject {
    NSMutableDictionary *_cardSectionViewControllerClassNameForCardSectionClassName;
}




-(Class)cardSectionViewControllerClassForCardSectionClass:(Class)arg0 ;
-(id)init;
-(void)registerCardSectionViewControllerClass:(Class)arg0 forCardSectionClass:(Class)arg1 ;


@end


#endif