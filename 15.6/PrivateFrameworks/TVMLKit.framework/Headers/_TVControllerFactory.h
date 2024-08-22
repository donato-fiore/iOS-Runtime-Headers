// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVCONTROLLERFACTORY_H
#define _TVCONTROLLERFACTORY_H


#import <Foundation/Foundation.h>


@interface _TVControllerFactory : NSObject



-(id)_carouselControllerForElement:(id)arg0 layout:(id)arg1 existingController:(id)arg2 ;
-(id)_gridControllerForElement:(id)arg0 existingController:(id)arg1 ;
-(id)_listControllerForElement:(id)arg0 existingController:(id)arg1 ;
-(id)_shelfControllerForElement:(id)arg0 existingController:(id)arg1 ;
-(id)_textFieldControllerForElement:(id)arg0 existingController:(id)arg1 ;
-(id)init;
-(void)_registerControllerCreators;


@end


#endif