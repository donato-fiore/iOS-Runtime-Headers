// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMTRANSIENTIMAGEMANAGERREQUEST_H
#define CAMTRANSIENTIMAGEMANAGERREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CAMTransientImageManagerRequest : NSObject

@property (nonatomic) BOOL isCanceled; // ivar: _isCanceled
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid




@end


#endif