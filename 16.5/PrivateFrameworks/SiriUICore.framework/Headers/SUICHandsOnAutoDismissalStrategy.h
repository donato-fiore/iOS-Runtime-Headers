// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUICHANDSONAUTODISMISSALSTRATEGY_H
#define SUICHANDSONAUTODISMISSALSTRATEGY_H



#import "SUICAutoDismissalStrategy.h"

@interface SUICHandsOnAutoDismissalStrategy : SUICAutoDismissalStrategy {
    id *_mapsNavigationStatusIsActiveBlock;
}




-(BOOL)shouldDismiss;
-(CGFloat)idleTimeInterval;
-(id)_mapsNavigationStatusIsActiveBlock:(SEL)arg0 ;
-(void)_setMapsNavigationStatusIsActiveBlock:(id)arg0 ;


@end


#endif