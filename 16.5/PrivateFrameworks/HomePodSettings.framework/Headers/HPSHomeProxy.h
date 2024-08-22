// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSHOMEPROXY_H
#define HPSHOMEPROXY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HPSHomeProxy : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accesoryName; // ivar: _accesoryName
@property (readonly, nonatomic) BOOL hasValidHomeLoaded; // ivar: _hasValidHomeLoaded
@property (nonatomic) BOOL isAutoSUEnabled; // ivar: _isAutoSUEnabled
@property (nonatomic) BOOL isMediaPeerToPeerEnabled; // ivar: _isMediaPeerToPeerEnabled
@property (nonatomic) NSInteger minimumMediaUserPrivilege; // ivar: _minimumMediaUserPrivilege


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccessoryName:(id)arg0 validHome:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif