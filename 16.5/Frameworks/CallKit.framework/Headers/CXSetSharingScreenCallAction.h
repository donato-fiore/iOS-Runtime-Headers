// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXSETSHARINGSCREENCALLACTION_H
#define CXSETSHARINGSCREENCALLACTION_H



#import "CXCallAction.h"
#import "CXScreenShareAttributes.h"

@interface CXSetSharingScreenCallAction : CXCallAction

@property (retain, nonatomic) CXScreenShareAttributes *attributes; // ivar: _attributes
@property (nonatomic, getter=isSharingScreen) BOOL sharingScreen; // ivar: _sharingScreen


+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)initWithCallUUID:(id)arg0 sharingScreen:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif