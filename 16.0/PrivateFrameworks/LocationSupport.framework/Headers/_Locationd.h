// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LOCATIOND_H
#define _LOCATIOND_H

@class NSString;
@protocol CLIntersiloServiceProtocol;

#import <Foundation/Foundation.h>


@interface _Locationd : NSObject <CLIntersiloServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid; // ivar: _valid


+(BOOL)isSupported;
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg0 index:(NSUInteger)arg1 ;
+(void)performSyncOnSilo:(id)arg0 invoker:(id)arg1 ;


@end


#endif