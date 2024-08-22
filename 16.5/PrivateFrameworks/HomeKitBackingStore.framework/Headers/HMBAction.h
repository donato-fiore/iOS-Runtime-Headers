// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBACTION_H
#define HMBACTION_H

@class HMFObject;
@protocol NSCopying, NSMutableCopying;



@interface HMBAction : HMFObject <NSCopying, NSMutableCopying>



@property (nonatomic) BOOL shouldUpdateClients; // ivar: _shouldUpdateClients


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif