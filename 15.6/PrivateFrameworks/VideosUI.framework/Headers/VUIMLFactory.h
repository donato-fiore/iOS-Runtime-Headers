// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMLFACTORY_H
#define VUIMLFACTORY_H


#import <Foundation/Foundation.h>


@interface VUIMLFactory : NSObject



+(id)sharedInstance;
+(void)_registerElements;
-(Class)collectionViewCellClassForElement:(id)arg0 ;
-(id)URLForResource:(id)arg0 ;
-(id)_URLForResource:(id)arg0 inBundle:(id)arg1 ;
-(id)imageForResource:(id)arg0 ;
-(id)imageProxyForElement:(id)arg0 withLayout:(id)arg1 ;
-(id)init;
-(id)navigationControllerForTabIdentifier:(id)arg0 ;
-(id)viewControllerForElement:(id)arg0 existingViewController:(id)arg1 ;
-(id)viewForElement:(id)arg0 existingView:(id)arg1 ;


@end


#endif