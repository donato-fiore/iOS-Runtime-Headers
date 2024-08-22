// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCALL_H
#define CTCALL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CTCall : NSObject

@property (copy, nonatomic) NSString *callID; // ivar: _callID
@property (copy, nonatomic) NSString *callState; // ivar: _callState


+(id)callForCTCallRef:(struct __CTCall *)arg0 ;
+(id)callForCXCall:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(void)dealloc;


@end


#endif