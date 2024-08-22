// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXSETTRASHEDVOICEMAILACTION_H
#define CXSETTRASHEDVOICEMAILACTION_H



#import "CXVoicemailAction.h"

@interface CXSetTrashedVoicemailAction : CXVoicemailAction

@property (nonatomic, getter=isTrashed) BOOL trashed; // ivar: _trashed


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVoicemailUUID:(id)arg0 trashed:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif