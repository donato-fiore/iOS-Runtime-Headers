// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNLIVEVIDEOSOURCEUSAGEENTRY_H
#define KNLIVEVIDEOSOURCEUSAGEENTRY_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNLiveVideoSourceUsageEntry : NSObject <NSCopying>



@property (readonly, nonatomic) NSSet *archivedBackgroundKinds; // ivar: _archivedBackgroundKinds


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)entryByMergingEntry:(id)arg0 ;
-(id)initWithArchivedBackgroundKinds:(id)arg0 ;
-(id)initWithMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif