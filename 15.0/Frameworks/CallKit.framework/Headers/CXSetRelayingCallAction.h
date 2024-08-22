// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXSETRELAYINGCALLACTION_H
#define CXSETRELAYINGCALLACTION_H



#import "CXCallAction.h"

@interface CXSetRelayingCallAction : CXCallAction

@property (nonatomic, getter=isRelaying) BOOL relaying; // ivar: _relaying


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 relaying:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif