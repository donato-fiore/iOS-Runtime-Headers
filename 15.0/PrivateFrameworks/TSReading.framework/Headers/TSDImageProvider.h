// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMAGEPROVIDER_H
#define TSDIMAGEPROVIDER_H

@class TSUFlushingManager;

#import <Foundation/Foundation.h>

#import "TSPData.h"

@interface TSDImageProvider : NSObject {
    int mLoadState;
    TSPData *mImageData;
    TSUFlushingManager *mFlushingManager;
    int mInterest;
    os_unfair_lock_s mInterestLock;
    atomic<int> mRetainCount;
    atomic<int> mOwnerCount;
}


@property (readonly, nonatomic) NSUInteger imageGamut;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)hasFlushableContent;
-(BOOL)isError;
-(BOOL)isValid;
-(NSUInteger)retainCount;
-(id)imageData;
-(id)initWithImageData:(id)arg0 ;
-(id)retain;
-(int)interest;
-(struct CGSize )dpiAdjustedNaturalSize;
-(struct CGSize )naturalSize;
-(void)addInterest;
-(void)addOwner;
-(void)dealloc;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)flush;
-(void)flushIfInterestLessThan:(int)arg0 ;
-(void)i_commonInit;
-(void)ownerAccess;
-(void)release;
-(void)removeInterest;
-(void)removeOwner;
-(void)setFlushingManager:(id)arg0 ;


@end


#endif