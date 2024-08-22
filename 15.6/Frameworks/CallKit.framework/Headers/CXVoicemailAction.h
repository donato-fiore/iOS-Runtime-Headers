// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXVOICEMAILACTION_H
#define CXVOICEMAILACTION_H

@class NSUUID;


#import "CXAction.h"

@interface CXVoicemailAction : CXAction

@property (copy, nonatomic) NSUUID *voicemailUUID; // ivar: _voicemailUUID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVoicemailUUID:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif