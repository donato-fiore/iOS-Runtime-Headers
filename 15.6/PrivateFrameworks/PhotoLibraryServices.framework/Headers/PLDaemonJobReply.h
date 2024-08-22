// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDAEMONJOBREPLY_H
#define PLDAEMONJOBREPLY_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PLDaemonJobReply : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply; // ivar: _xpcReply


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReply:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif