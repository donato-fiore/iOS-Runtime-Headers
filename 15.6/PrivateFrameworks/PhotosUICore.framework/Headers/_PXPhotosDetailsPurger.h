// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOSDETAILSPURGER_H
#define _PXPHOTOSDETAILSPURGER_H

@class NSHashTable, NSPointerArray;

#import <Foundation/Foundation.h>


@interface _PXPhotosDetailsPurger : NSObject {
    NSHashTable *_allViewControllers;
    NSPointerArray *_lastUsedViewControllers;
}




+(id)sharedPurger;
-(id)init;
-(void)_purgeAllViewControllers;
-(void)detailsViewControllerDidAppear:(id)arg0 ;
-(void)didReceiveMemoryWarning:(id)arg0 ;
-(void)purgeOldViewControllers;


@end


#endif