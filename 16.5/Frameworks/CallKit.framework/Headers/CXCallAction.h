// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCALLACTION_H
#define CXCALLACTION_H

@class NSUUID;


#import "CXAction.h"

@interface CXCallAction : CXAction

@property (copy, nonatomic) NSUUID *callUUID; // ivar: _callUUID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDescription;
-(id)init;
-(id)initWithCallUUID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif