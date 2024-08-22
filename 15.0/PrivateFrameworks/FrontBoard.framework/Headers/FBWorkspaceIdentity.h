// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBWORKSPACEIDENTITY_H
#define FBWORKSPACEIDENTITY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FBWorkspaceIdentity : NSObject <NSCopying>



@property (readonly, nonatomic) int pid; // ivar: _pid


+(id)identityWithPid:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithPid:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif