// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCALLHISTORYDATASOURCE_H
#define ATXCALLHISTORYDATASOURCE_H


#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXCallHistoryDataSource : NSObject {
    ATXHeuristicDevice *_device;
}




-(id)_dictForCall:(id)arg0 ;
-(id)_dictForHandle:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)callNewerThan:(CGFloat)arg0 showIncoming:(BOOL)arg1 showOutgoing:(BOOL)arg2 missedOnly:(BOOL)arg3 callback:(id)arg4 ;


@end


#endif