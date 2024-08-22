// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXSETMUTEDCALLACTION_H
#define CXSETMUTEDCALLACTION_H



#import "CXCallAction.h"

@interface CXSetMutedCallAction : CXCallAction

@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 muted:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif