// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNTRANSCRIPTACTIONRECORD_H
#define LNTRANSCRIPTACTIONRECORD_H

@class LNAction, NSString, NSDate, NSUUID, NSArray;
@protocol NSSecureCoding, BMStoreData;

#import <Foundation/Foundation.h>

#import "LNActionOutput.h"

@interface LNTranscriptActionRecord : NSObject <NSSecureCoding, BMStoreData>



@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) LNActionOutput *actionOutput; // ivar: _actionOutput
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *clientLabel; // ivar: _clientLabel
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *executionDate; // ivar: _executionDate
@property (readonly, copy, nonatomic) NSUUID *executionUUID; // ivar: _executionUUID
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *predictions; // ivar: _predictions
@property (readonly, copy, nonatomic) LNAction *resolvedAction; // ivar: _resolvedAction
@property (nonatomic) unsigned short source; // ivar: _source
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAction:(id)arg0 resolvedAction:(id)arg1 bundleIdentifier:(id)arg2 actionOutput:(id)arg3 executionUUID:(id)arg4 source:(unsigned short)arg5 executionDate:(id)arg6 clientLabel:(id)arg7 predictions:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif