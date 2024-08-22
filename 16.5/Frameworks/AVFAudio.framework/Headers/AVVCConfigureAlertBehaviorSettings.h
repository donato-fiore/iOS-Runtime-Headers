// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVCCONFIGUREALERTBEHAVIORSETTINGS_H
#define AVVCCONFIGUREALERTBEHAVIORSETTINGS_H


#import <Foundation/Foundation.h>


@interface AVVCConfigureAlertBehaviorSettings : NSObject

@property (nonatomic) NSInteger startAlert; // ivar: _startAlert
@property (nonatomic) NSInteger stopAlert; // ivar: _stopAlert
@property (nonatomic) NSInteger stopOnErrorAlert; // ivar: _stopOnErrorAlert
@property (nonatomic) NSUInteger streamID; // ivar: _streamID


-(id)initWithStreamID:(NSUInteger)arg0 ;


@end


#endif