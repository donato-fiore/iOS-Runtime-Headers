// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCOMMANDNICEGROUPSESSIONRTCMETRIC_H
#define IDSCOMMANDNICEGROUPSESSIONRTCMETRIC_H

@class NSString, NSDictionary;
@protocol CUTRTCMetric;

#import <Foundation/Foundation.h>


@interface IDSCommandNiceGroupSessionRTCMetric : NSObject <CUTRTCMetric>



@property (readonly, nonatomic) NSInteger command; // ivar: _command
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger retryCount; // ivar: _retryCount
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


-(id)initWithCommand:(NSInteger)arg0 success:(BOOL)arg1 errorDomain:(id)arg2 errorCode:(NSInteger)arg3 retryCount:(NSInteger)arg4 ;


@end


#endif