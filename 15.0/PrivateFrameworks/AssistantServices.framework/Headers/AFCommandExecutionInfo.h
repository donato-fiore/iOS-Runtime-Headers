// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFCOMMANDEXECUTIONINFO_H
#define AFCOMMANDEXECUTIONINFO_H

@class NSString, NSArray, NSUUID, NSDictionary;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>

#import "AFHomeInfo.h"
#import "AFEndpointInfo.h"
#import "AFInstanceInfo.h"
#import "AFPeerInfo.h"
#import "AFRequestHandlingContext.h"
#import "AFSpeechInfo.h"

@interface AFCommandExecutionInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) AFHomeInfo *currentHomeInfo; // ivar: _currentHomeInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *deviceRestrictions; // ivar: _deviceRestrictions
@property (readonly, copy, nonatomic) AFEndpointInfo *endpointInfo; // ivar: _endpointInfo
@property (readonly, copy, nonatomic) NSString *executionID; // ivar: _executionID
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) AFInstanceInfo *instanceInfo; // ivar: _instanceInfo
@property (readonly, copy, nonatomic) AFPeerInfo *originPeerInfo; // ivar: _originPeerInfo
@property (readonly, copy, nonatomic) AFRequestHandlingContext *requestHandlingContextSnapshot; // ivar: _requestHandlingContextSnapshot
@property (readonly, copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (readonly, copy, nonatomic) AFSpeechInfo *speechInfo; // ivar: _speechInfo
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *turnId; // ivar: _turnId
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithExecutionID:(id)arg0 requestID:(id)arg1 turnId:(id)arg2 originPeerInfo:(id)arg3 currentHomeInfo:(id)arg4 endpointInfo:(id)arg5 instanceInfo:(id)arg6 speechInfo:(id)arg7 requestHandlingContextSnapshot:(id)arg8 deviceRestrictions:(id)arg9 userInfo:(id)arg10 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif