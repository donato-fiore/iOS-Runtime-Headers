// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICOREACECONNECTIONANALYSISINFO_H
#define SIRICOREACECONNECTIONANALYSISINFO_H

@class NSURL, NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "SiriCoreConnectionType.h"

@interface SiriCoreAceConnectionAnalysisInfo : NSObject

@property (readonly, nonatomic) SiriCoreConnectionType *connectionType; // ivar: _connectionType
@property (readonly, nonatomic) NSURL *connectionURL; // ivar: _connectionURL
@property (readonly, nonatomic) int interfaceIndex; // ivar: _interfaceIndex
@property (copy, nonatomic) NSString *policyId; // ivar: _policyId
@property (readonly, copy, nonatomic) NSNumber *sendBufferSize; // ivar: _sendBufferSize
@property (readonly, nonatomic) BOOL wwanPreferred; // ivar: _wwanPreferred


-(id)initWithConnectionURL:(id)arg0 interfaceIndex:(int)arg1 sendBufferSize:(id)arg2 wwanPreferred:(BOOL)arg3 connectionType:(id)arg4 policyId:(id)arg5 ;


@end


#endif