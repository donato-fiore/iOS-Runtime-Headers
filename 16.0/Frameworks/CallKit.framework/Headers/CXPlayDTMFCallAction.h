// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXPLAYDTMFCALLACTION_H
#define CXPLAYDTMFCALLACTION_H

@class NSString;


#import "CXCallAction.h"

@interface CXPlayDTMFCallAction : CXCallAction

@property (copy, nonatomic) NSString *digits; // ivar: _digits
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 digits:(id)arg1 type:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif