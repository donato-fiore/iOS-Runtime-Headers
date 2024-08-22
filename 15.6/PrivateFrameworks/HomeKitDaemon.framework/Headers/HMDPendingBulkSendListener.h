// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPENDINGBULKSENDLISTENER_H
#define HMDPENDINGBULKSENDLISTENER_H

@class NSString;
@protocol HMDDataStreamBulkSendListener;

#import <Foundation/Foundation.h>


@interface HMDPendingBulkSendListener : NSObject

@property (retain, nonatomic) NSString *fileType; // ivar: _fileType
@property (weak, nonatomic) NSObject<HMDDataStreamBulkSendListener> *listener; // ivar: _listener


-(id)initWithListener:(id)arg0 fileType:(id)arg1 ;


@end


#endif