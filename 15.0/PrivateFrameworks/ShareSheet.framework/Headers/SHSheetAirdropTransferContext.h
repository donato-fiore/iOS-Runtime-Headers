// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSHEETAIRDROPTRANSFERCONTEXT_H
#define SHSHEETAIRDROPTRANSFERCONTEXT_H

@class NSNumber, NSUUID;

#import <Foundation/Foundation.h>


@interface SHSheetAirdropTransferContext : NSObject

@property (readonly, nonatomic) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) NSNumber *bottomTextSlot; // ivar: _bottomTextSlot
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) BOOL shouldPulse; // ivar: _shouldPulse
@property (readonly, nonatomic) NSNumber *topTextSlot; // ivar: _topTextSlot


-(id)description;
-(id)initWithProgress:(CGFloat)arg0 withTopTextSlot:(id)arg1 bottomTextSlot:(id)arg2 forNodeWithIdentifier:(id)arg3 shouldPulse:(BOOL)arg4 animated:(BOOL)arg5 ;


@end


#endif