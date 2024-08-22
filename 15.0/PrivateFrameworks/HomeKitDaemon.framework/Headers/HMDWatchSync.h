// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWATCHSYNC_H
#define HMDWATCHSYNC_H

@class HMFObject, NSUUID;
@protocol NSCopying;



@interface HMDWatchSync : HMFObject <NSCopying>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property BOOL inProgress; // ivar: _inProgress
@property NSUInteger syncOption; // ivar: _syncOption


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 syncOption:(NSUInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 syncOption:(NSUInteger)arg1 inProgress:(BOOL)arg2 ;
-(id)initWithSyncOption:(NSUInteger)arg0 ;


@end


#endif