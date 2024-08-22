// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXSETHELDCALLACTION_H
#define CXSETHELDCALLACTION_H



#import "CXCallAction.h"

@interface CXSetHeldCallAction : CXCallAction

@property (nonatomic, getter=isOnHold) BOOL onHold; // ivar: _onHold


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 onHold:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif