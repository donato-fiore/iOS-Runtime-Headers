// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERDISPLAYITEMREMOVALRESOLUTIONREQUEST_H
#define SBSWITCHERDISPLAYITEMREMOVALRESOLUTIONREQUEST_H

@class NSMapTable, NSArray;

#import <Foundation/Foundation.h>


@interface SBSwitcherDisplayItemRemovalResolutionRequest : NSObject {
    NSMapTable *_displayItemToRemovalIntentType;
}


@property (readonly, copy, nonatomic) NSArray *displayItems;


-(NSInteger)removalIntentTypeForDisplayItem:(id)arg0 ;
-(void)setRemovalIntentType:(NSInteger)arg0 forDisplayItem:(id)arg1 ;


@end


#endif