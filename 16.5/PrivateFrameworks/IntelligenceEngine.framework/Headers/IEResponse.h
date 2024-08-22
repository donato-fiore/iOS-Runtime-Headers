// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IERESPONSE_H
#define IERESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IEResponse : NSObject

@property (retain, nonatomic) NSString *dialogPhase; // ivar: _dialogPhase
@property (retain, nonatomic) NSString *inputGroupId; // ivar: _inputGroupId
@property (retain, nonatomic) NSString *response_id; // ivar: _response_id
@property (nonatomic) BOOL sensitiveData; // ivar: _sensitiveData




@end


#endif