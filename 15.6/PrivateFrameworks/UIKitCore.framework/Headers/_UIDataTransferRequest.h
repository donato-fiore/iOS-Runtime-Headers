// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATATRANSFERREQUEST_H
#define _UIDATATRANSFERREQUEST_H

@class NSUUID, NSString, NSItemProvider, NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>


@interface _UIDataTransferRequest : NSObject <NSProgressReporting>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;




@end


#endif