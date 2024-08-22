// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXENABLEVIDEOCALLACTION_H
#define CXENABLEVIDEOCALLACTION_H

@protocol NSSecureCoding;


#import "CXCallAction.h"

@interface CXEnableVideoCallAction : CXCallAction <NSSecureCoding>



@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 videoEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif