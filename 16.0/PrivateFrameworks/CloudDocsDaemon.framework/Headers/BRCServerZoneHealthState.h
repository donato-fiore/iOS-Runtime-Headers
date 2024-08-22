// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSERVERZONEHEALTHSTATE_H
#define BRCSERVERZONEHEALTHSTATE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BRFieldCKInfo.h"

@interface BRCServerZoneHealthState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BRFieldCKInfo *ckInfo; // ivar: _ckInfo
@property (readonly, nonatomic) int state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCKInfo:(id)arg0 state:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerZoneHealthState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif