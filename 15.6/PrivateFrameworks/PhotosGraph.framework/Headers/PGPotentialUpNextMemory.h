// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPOTENTIALUPNEXTMEMORY_H
#define PGPOTENTIALUPNEXTMEMORY_H

@class PHPhotoLibrary, PHUserFeedbackCalculator, PHAsset, NSString, PHMemory;
@protocol PGPotentialUpNextMemoryProtocol;

#import <Foundation/Foundation.h>


@interface PGPotentialUpNextMemory : NSObject <PGPotentialUpNextMemoryProtocol>

 {
    PHPhotoLibrary *_photoLibrary;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    BOOL _noKeyAsset;
    PHAsset *_keyAsset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) NSString *keyAssetLocalIdentifier;
@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly, nonatomic) NSString *memoryLocalIdentifier;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(BOOL)isBlockedByUserFeedback;
-(id)initWithMemory:(id)arg0 photoLibrary:(id)arg1 userFeedbackCalculator:(id)arg2 ;


@end


#endif