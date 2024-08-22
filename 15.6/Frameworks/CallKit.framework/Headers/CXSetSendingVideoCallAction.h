// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXSETSENDINGVIDEOCALLACTION_H
#define CXSETSENDINGVIDEOCALLACTION_H



#import "CXCallAction.h"

@interface CXSetSendingVideoCallAction : CXCallAction

@property (nonatomic, getter=isSendingVideo) BOOL sendingVideo; // ivar: _sendingVideo


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 sendingVideo:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif