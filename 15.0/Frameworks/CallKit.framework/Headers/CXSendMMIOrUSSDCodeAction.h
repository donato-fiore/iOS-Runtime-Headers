// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXSENDMMIORUSSDCODEACTION_H
#define CXSENDMMIORUSSDCODEACTION_H

@class NSString, NSUUID;


#import "CXAction.h"

@interface CXSendMMIOrUSSDCodeAction : CXAction

@property (copy, nonatomic) NSString *code; // ivar: _code
@property (retain, nonatomic) NSUUID *senderIdentityUUID; // ivar: _senderIdentityUUID
@property (nonatomic) NSInteger ttyType; // ivar: _ttyType


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif