// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSTEMPORALCLUSTERREADER_H
#define CLSTEMPORALCLUSTERREADER_H


#import <Foundation/Foundation.h>


@interface CLSTemporalClusterReader : NSObject



+(BOOL)_isSupportedPortraitEventCategory:(unsigned char)arg0 ;
-(id)eventsBetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;


@end


#endif