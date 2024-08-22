// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXSETVIDEOPRESENTATIONSTATECALLACTION_H
#define CXSETVIDEOPRESENTATIONSTATECALLACTION_H



#import "CXCallAction.h"

@interface CXSetVideoPresentationStateCallAction : CXCallAction

@property (nonatomic) NSInteger videoPresentationState; // ivar: _videoPresentationState


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 videoPresentationState:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif