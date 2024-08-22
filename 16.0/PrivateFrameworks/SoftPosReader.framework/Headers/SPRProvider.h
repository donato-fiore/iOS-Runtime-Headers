// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRPROVIDER_H
#define SPRPROVIDER_H



#import "SPRObject.h"

@interface SPRProvider : SPRObject

@property (readonly, nonatomic) NSInteger maxConfiguratorInstance; // ivar: _maxConfiguratorInstance
@property (readonly, nonatomic) NSInteger maxMonitorInstance; // ivar: _maxMonitorInstance
@property (readonly, nonatomic) NSInteger maxReaderInstance; // ivar: _maxReaderInstance


+(id)shared;
-(id)makeConfiguratorAndReturnError:(*id)arg0 ;
-(id)makeMonitorAndReturnError:(*id)arg0 ;
-(id)makePINControllerAndReturnError:(*id)arg0 ;
-(id)makeReaderAndReturnError:(*id)arg0 ;


@end


#endif