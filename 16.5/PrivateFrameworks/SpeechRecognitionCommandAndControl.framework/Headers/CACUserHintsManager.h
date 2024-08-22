// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACUSERHINTSMANAGER_H
#define CACUSERHINTSMANAGER_H


#import <Foundation/Foundation.h>


@interface CACUserHintsManager : NSObject {
    CGFloat _lastPruneTime;
}




+(id)sharedManager;
+(void)initialize;
-(BOOL)shouldDisplayUserHintAfterRegisteringIdentifier:(id)arg0 ;
-(NSUInteger)_countAfterRegisteringUserHintIdentifier:(id)arg0 ;
-(id)init;
-(id)suggestedCommandIdentifiersFromActiveCommandIdentifiers:(id)arg0 maximumCount:(NSInteger)arg1 ;
-(void)clearHistory;


@end


#endif