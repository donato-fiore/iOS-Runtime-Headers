// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BFFNAVBARSPINNERMANAGER_H
#define BFFNAVBARSPINNERMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BFFNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRightItems;
    NSMutableDictionary *_savedLeftItems;
    NSMutableDictionary *_navigationItems;
}




+(id)sharedSpinnerManager;
-(id)init;
-(void)startAnimatingInNavItem:(id)arg0 forIdentifier:(id)arg1 ;
-(void)stopAnimatingForIdentifier:(id)arg0 ;


@end


#endif