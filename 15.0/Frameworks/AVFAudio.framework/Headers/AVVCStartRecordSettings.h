// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVVCSTARTRECORDSETTINGS_H
#define AVVCSTARTRECORDSETTINGS_H


#import <Foundation/Foundation.h>


@interface AVVCStartRecordSettings : NSObject

@property (nonatomic) BOOL skipAlert; // ivar: _skipAlert
@property (nonatomic) NSInteger startAlert; // ivar: _startAlert
@property (nonatomic) unsigned int startAnchorPoint; // ivar: _startAnchorPoint
@property (nonatomic) NSUInteger startHostTime; // ivar: _startHostTime
@property (nonatomic) NSInteger stopAlert; // ivar: _stopAlert
@property (nonatomic) NSInteger stopOnErrorAlert; // ivar: _stopOnErrorAlert
@property (nonatomic) NSUInteger streamID; // ivar: _streamID


-(id)initWithStreamID:(NSUInteger)arg0 atStartHostTime:(NSUInteger)arg1 ;


@end


#endif