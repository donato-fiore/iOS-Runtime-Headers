// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCACCESSCHECKRESULT_H
#define FCACCESSCHECKRESULT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCAccessCheckResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger blockedReason; // ivar: _blockedReason
@property (readonly, nonatomic) BOOL canAccess; // ivar: _canAccess


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCanAccess:(BOOL)arg0 blockedReason:(NSUInteger)arg1 ;


@end


#endif