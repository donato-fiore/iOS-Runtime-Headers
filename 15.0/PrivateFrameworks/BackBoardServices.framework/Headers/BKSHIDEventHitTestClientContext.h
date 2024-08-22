// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTHITTESTCLIENTCONTEXT_H
#define BKSHIDEVENTHITTESTCLIENTCONTEXT_H

@class NSString;
@protocol BSProtobufSerializable, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSHIDEventHitTestClientContext : NSObject <BSProtobufSerializable, BSXPCSecureCoding>



@property (nonatomic) unsigned int contextID; // ivar: _contextID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif