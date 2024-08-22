// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTREQUEST_H
#define ASTREQUEST_H

@class NSNumber, NSDictionary;


#import "ASTSealablePayload.h"
#import "ASTErrorStatus.h"

@interface ASTRequest : ASTSealablePayload

@property (nonatomic) NSInteger clientStatus; // ivar: _clientStatus
@property (retain, nonatomic) NSNumber *currentTest; // ivar: _currentTest
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) ASTErrorStatus *error; // ivar: _error
@property (retain, nonatomic) NSNumber *progress; // ivar: _progress


+(id)request;
+(id)stringFromClientStatus:(NSInteger)arg0 ;
-(id)description;
-(id)generatePayload;
-(id)init;


@end


#endif