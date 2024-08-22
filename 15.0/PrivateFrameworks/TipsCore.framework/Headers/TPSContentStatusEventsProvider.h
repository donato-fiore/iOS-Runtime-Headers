// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTENTSTATUSEVENTSPROVIDER_H
#define TPSCONTENTSTATUSEVENTSPROVIDER_H



#import "TPSEventsProvider.h"
#import "TPSTipStatusController.h"

@interface TPSContentStatusEventsProvider : TPSEventsProvider {
    TPSTipStatusController *_tipStatusController;
}




-(BOOL)_isStatus:(id)arg0 observedForType:(NSInteger)arg1 ;
-(id)init;
-(void)queryEvents:(id)arg0 ;


@end


#endif