// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKTEAMPERMISSIONS_H
#define FBKTEAMPERMISSIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FBKTeamPermissions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL canAssign; // ivar: _canAssign
@property (readonly, nonatomic) BOOL canClose; // ivar: _canClose
@property (readonly, nonatomic) BOOL canDemote; // ivar: _canDemote
@property (readonly, nonatomic) BOOL canDownload; // ivar: _canDownload
@property (readonly, nonatomic) BOOL canRespond; // ivar: _canRespond
@property (readonly, nonatomic) BOOL canView; // ivar: _canView


+(BOOL)supportsSecureCoding;
+(id)personalTeamPermissions;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)initWithView:(BOOL)arg0 respond:(BOOL)arg1 close:(BOOL)arg2 download:(BOOL)arg3 assign:(BOOL)arg4 demote:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif