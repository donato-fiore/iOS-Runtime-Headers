// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMAGECOMPATIBILITYCHECKER_H
#define TSDIMAGECOMPATIBILITYCHECKER_H

@class TSPData, NSString, NSError;
@protocol TSDMediaCompatibilityChecker;

#import <Foundation/Foundation.h>


@interface TSDImageCompatibilityChecker : NSObject <TSDMediaCompatibilityChecker>

 {
    TSPData *mImageData;
    uint8_t mCancelled;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSInteger compatibilityLevel; // ivar: mCompatibilityLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: mError
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)platformSupportsHEIF;
+(void)initialize;
-(id)initWithImageData:(id)arg0 ;
-(void)cancel;
-(void)checkCompatibilityUpToLevel:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif