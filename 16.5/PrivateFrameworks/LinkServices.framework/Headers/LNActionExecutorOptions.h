// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONEXECUTOROPTIONS_H
#define LNACTIONEXECUTOROPTIONS_H

@class NSString, NSUUID, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNEnvironment.h"
#import "LNSystemContext.h"

@interface LNActionExecutorOptions : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *clientLabel; // ivar: _clientLabel
@property (nonatomic) CGFloat connectionOperationTimeout; // ivar: _connectionOperationTimeout
@property (nonatomic) BOOL donateToTranscript; // ivar: _donateToTranscript
@property (copy, nonatomic) LNEnvironment *environment; // ivar: _environment
@property (copy, nonatomic) NSUUID *executionUUID; // ivar: _executionUUID
@property (nonatomic) NSInteger interactionMode; // ivar: _interactionMode
@property (nonatomic) unsigned short source; // ivar: _source
@property (copy, nonatomic) LNSystemContext *systemContext; // ivar: _systemContext
@property (copy, nonatomic) NSNumber *viewActionIdentifier; // ivar: _viewActionIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif