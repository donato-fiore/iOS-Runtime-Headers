// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UMLOG_H
#define UMLOG_H


#import <Foundation/Foundation.h>


@interface UMLog : NSObject

@property (nonatomic) NSUInteger type; // ivar: _type


+(id)debug;
+(id)error;
+(id)fault;
+(id)info;
+(id)standard;
-(void)logMessage:(id)arg0 ;
-(void)logPrivateFormat:(id)arg0 ;
-(void)logPublicFormat:(id)arg0 ;


@end


#endif