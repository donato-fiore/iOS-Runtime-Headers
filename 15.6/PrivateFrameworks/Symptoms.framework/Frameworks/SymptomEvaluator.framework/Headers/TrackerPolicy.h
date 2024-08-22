// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRACKERPOLICY_H
#define TRACKERPOLICY_H


#import <Foundation/Foundation.h>

#import "FlowClassification.h"

@interface TrackerPolicy : NSObject {
    ? _classMap;
    ? _mgmtFlagsMap;
}


@property (retain) FlowClassification *defaultClassification; // ivar: _defaultClassification
@property NSUInteger maximumConnectionsPerHour; // ivar: _maximumConnectionsPerHour
@property unsigned int numClassMaps; // ivar: _numClassMaps
@property unsigned int numMgmtFlagsMaps; // ivar: _numMgmtFlagsMaps


+(id)preferredInstance:(id)arg0 ;
+(void)initialize;
-(id)description;
-(id)flowClassificationFor:(id)arg0 ;
-(id)init;
-(id)nonDefaultFlowClassificationFor:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;
-(void)addClassification:(id)arg0 forTrafficClass:(unsigned int)arg1 ;
-(void)addClassification:(id)arg0 forTrafficMgmtFlags:(unsigned int)arg1 ;


@end


#endif