// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAIRDROPTRANSFERCHANGE_H
#define SFAIRDROPTRANSFERCHANGE_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFProxyText.h"

@interface SFAirDropTransferChange : NSObject <NSSecureCoding>



@property (readonly, nonatomic) SFProxyText *displayName; // ivar: _displayName
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) NSUUID *proxyIdentifier; // ivar: _proxyIdentifier
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) SFProxyText *status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProxyIdentifier:(id)arg0 progress:(CGFloat)arg1 displayName:(id)arg2 status:(id)arg3 state:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif