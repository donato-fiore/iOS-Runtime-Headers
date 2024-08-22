// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPREVIOUSLYDOWNLOADEDMESSAGEDATA_H
#define EDPREVIOUSLYDOWNLOADEDMESSAGEDATA_H

@class NSArray;
@protocol OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface EDPreviouslyDownloadedMessageData : NSObject

@property (readonly, nonatomic) BOOL hasFullMessageData; // ivar: _hasFullMessageData
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *headersOnlyData; // ivar: _headersOnlyData
@property (readonly, nonatomic) NSArray *mimeParts; // ivar: _mimeParts
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *partialMessageData; // ivar: _partialMessageData


-(id)initWithHeadersOnlyData:(id)arg0 partialMessageData:(id)arg1 hasFullMessageData:(BOOL)arg2 mimeParts:(id)arg3 ;


@end


#endif