// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADTIMESYNC_H
#define ADTIMESYNC_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "ADTimeSyncParameters.h"
#import "ADTimeSyncJasperParameters.h"

@interface ADTimeSync : NSObject {
    ADTimeSyncParameters *_parameters;
    ADTimeSyncJasperParameters *_jasperParameters;
    NSMutableArray *_primaryArray;
    NSMutableArray *_secondaryArray;
}




-(BOOL)checkJasperConditions;
-(BOOL)checkOnceForSyncResults:(id)arg0 ;
-(CGFloat)averageTimestampFromArray:(id)arg0 numberOfItems:(unsigned int)arg1 ;
-(CGFloat)currSecondaryTimestamp;
-(NSInteger)reset;
-(id)checkForSyncResults;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithParameters:(id)arg0 jasperParameters:(id)arg1 ;
-(id)pushData:(id)arg0 primaryStream:(BOOL)arg1 timestamp:(CGFloat)arg2 pose:(struct ? )arg3 ;
-(id)pushData:(id)arg0 primaryStream:(BOOL)arg1 timestamp:(CGFloat)arg2 pose:(struct ? )arg3 meta:(id)arg4 ;


@end


#endif