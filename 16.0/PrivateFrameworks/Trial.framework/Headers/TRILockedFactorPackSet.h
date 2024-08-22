// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRILOCKEDFACTORPACKSET_H
#define TRILOCKEDFACTORPACKSET_H

@class NSString<TRIFactorPackSetId>, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIReferenceManagedDirReaderLock.h"

@interface TRILockedFactorPackSet : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId; // ivar: _factorPackSetId
@property (readonly, nonatomic) TRIReferenceManagedDirReaderLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(id)lockedSetWithFactorPackSetId:(id)arg0 path:(id)arg1 lock:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLockedSet:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementFactorPackSetId:(id)arg0 ;
-(id)copyWithReplacementLock:(id)arg0 ;
-(id)copyWithReplacementPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFactorPackSetId:(id)arg0 path:(id)arg1 lock:(id)arg2 ;


@end


#endif