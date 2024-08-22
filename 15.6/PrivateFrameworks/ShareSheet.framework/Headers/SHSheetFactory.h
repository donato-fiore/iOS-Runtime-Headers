// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETFACTORY_H
#define SHSHEETFACTORY_H


#import <Foundation/Foundation.h>


@interface SHSheetFactory : NSObject



+(id)_createPlatformViewControllerWithSession:(id)arg0 ;
+(id)createAirdropViewControllerWithNoContentView:(BOOL)arg0 delegate:(id)arg1 ;
+(id)createContentViewControllerWithSession:(id)arg0 presenter:(id)arg1 ;
+(id)createMainPresenterWithContext:(id)arg0 ;
+(id)createOptionsViewControllerWithContext:(id)arg0 delegate:(id)arg1 ;
+(id)createUserDefaultsViewControllerWithContext:(id)arg0 delegate:(id)arg1 ;


@end


#endif