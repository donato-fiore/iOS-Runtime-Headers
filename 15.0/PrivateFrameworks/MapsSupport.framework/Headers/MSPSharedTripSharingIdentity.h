// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPSHAREDTRIPSHARINGIDENTITY_H
#define MSPSHAREDTRIPSHARINGIDENTITY_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPSharedTripSharingIdentity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *aliases; // ivar: _aliases
@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=hasValidAccount) BOOL validAccount; // ivar: _validAccount


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValidAccount:(BOOL)arg0 name:(id)arg1 handle:(id)arg2 aliases:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif