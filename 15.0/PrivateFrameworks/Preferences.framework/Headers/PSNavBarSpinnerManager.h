// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSNAVBARSPINNERMANAGER_H
#define PSNAVBARSPINNERMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PSNavBarSpinnerManager : NSObject {
    NSMutableDictionary *_savedRecords;
}




+(id)sharedSpinnerManager;
-(id)init;
-(void)startAnimatingInNavItem:(id)arg0 forIdentifier:(id)arg1 ;
-(void)startAnimatingInNavItem:(id)arg0 forIdentifier:(id)arg1 hideBackButton:(BOOL)arg2 ;
-(void)stopAnimatingForIdentifier:(id)arg0 ;


@end


#endif