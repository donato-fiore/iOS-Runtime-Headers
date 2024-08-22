// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTLAYOUTHINT_H
#define TSTLAYOUTHINT_H

@class NSString, NSNumber;
@protocol TSDHint, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TSTLayout.h"

@interface TSTLayoutHint : NSObject <TSDHint, NSSecureCoding>



@property (nonatomic) ? cacheHintID; // ivar: mCacheHintID
@property (nonatomic) ? cellRange; // ivar: mCellRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize effectiveSize; // ivar: mEffectiveSize
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL horizontal; // ivar: mHorizontal
@property (nonatomic) BOOL isValid; // ivar: mIsValid
@property (nonatomic) TSTLayout *layout; // ivar: mLayout
@property (nonatomic) CGSize maximumSize; // ivar: mMaximumSize
@property (nonatomic) unsigned int partitionPosition; // ivar: mPartitionPosition
@property (retain, nonatomic) NSNumber *partitioningPass; // ivar: mPartitioningPass
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)archivedHintClass;
-(BOOL)isFirstHint;
-(BOOL)overlapsWithSelection:(id)arg0 ;
-(id)copyForArchiving;
-(id)firstChildHint;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct ? )arg0 hintId:(struct ? )arg1 partitionPosition:(unsigned int)arg2 maximumSize:(struct CGSize )arg3 effectiveSize:(struct CGSize )arg4 layout:(id)arg5 validity:(BOOL)arg6 horizontal:(BOOL)arg7 ;
-(id)lastChildHint;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)offsetByDelta:(int)arg0 ;
-(void)release;


@end


#endif