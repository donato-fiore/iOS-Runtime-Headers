// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSYSYNCOPTIONS_H
#define PSYSYNCOPTIONS_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PSYTestInput.h"

@interface PSYSyncOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL dryRun; // ivar: _dryRun
@property (retain, nonatomic) NSUUID *pairingIdentifier; // ivar: _pairingIdentifier
@property (retain, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSUInteger syncSessionType; // ivar: _syncSessionType
@property (nonatomic) BOOL terminateDuringDryRun; // ivar: _terminateDuringDryRun
@property (retain, nonatomic) PSYTestInput *testInput; // ivar: _testInput


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif