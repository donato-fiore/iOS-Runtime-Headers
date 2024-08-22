// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXSETPLAYEDVOICEMAILACTION_H
#define CXSETPLAYEDVOICEMAILACTION_H



#import "CXVoicemailAction.h"

@interface CXSetPlayedVoicemailAction : CXVoicemailAction

@property (nonatomic, getter=isPlayed) BOOL played; // ivar: _played


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVoicemailUUID:(id)arg0 played:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif