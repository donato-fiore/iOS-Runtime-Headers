// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATAUDIOTAP_H
#define ATAUDIOTAP_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATAudioTapDescription.h"

@interface ATAudioTap : NSObject <NSSecureCoding>



@property (nonatomic, getter=isScreenSharingHost) BOOL screenSharingHost; // ivar: _screenSharingHost
@property (readonly, nonatomic) ATAudioTapDescription *tapDescription; // ivar: _tapDescription


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTapDescription:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif