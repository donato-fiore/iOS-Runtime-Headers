// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXSETVIDEOPRESENTATIONSIZECALLACTION_H
#define CXSETVIDEOPRESENTATIONSIZECALLACTION_H



#import "CXCallAction.h"

@interface CXSetVideoPresentationSizeCallAction : CXCallAction

@property (nonatomic) CGSize videoPresentationSize; // ivar: _videoPresentationSize


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 videoPresentationSize:(struct CGSize )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif