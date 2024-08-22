// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCLEGACYSESLOTINFO_H
#define DCLEGACYSESLOTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCLegacySESlotInfo : NSObject <NSSecureCoding>



@property (retain) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property BOOL isMissing; // ivar: _isMissing
@property (retain) NSString *partition; // ivar: _partition
@property (retain) NSString *presentmentKeyIdentifier; // ivar: _presentmentKeyIdentifier
@property NSInteger seSlot; // ivar: _seSlot


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSESlot:(NSInteger)arg0 isMissing:(BOOL)arg1 ;
-(id)initWithSESlot:(NSInteger)arg0 isMissing:(BOOL)arg1 partition:(id)arg2 credentialIdentifier:(id)arg3 presentmentKeyIdentifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif