// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ITATTENTIONAWARENESSCONTEXT_H
#define ITATTENTIONAWARENESSCONTEXT_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ITAttentionAwarenessContext : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif