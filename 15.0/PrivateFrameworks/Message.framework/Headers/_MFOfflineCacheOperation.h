// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFOFFLINECACHEOPERATION_H
#define _MFOFFLINECACHEOPERATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _MFOfflineCacheOperation : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)databaseID:(*id)arg0 andMailbox:(*id)arg1 forMessageWithRemoteID:(id)arg2 connection:(id)arg3 ;
-(BOOL)translateToLocalActionWithConnection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif