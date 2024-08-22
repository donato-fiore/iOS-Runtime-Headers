// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDMODIFYBADGEURLREQUEST_H
#define CKDMODIFYBADGEURLREQUEST_H



#import "CKDURLRequest.h"

@interface CKDModifyBadgeURLRequest : CKDURLRequest

@property (readonly, nonatomic) NSUInteger badgeValue; // ivar: _badgeValue


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 badgeValue:(NSUInteger)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif