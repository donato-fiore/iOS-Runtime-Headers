// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERAIMAGEGENERATOR_H
#define HFCAMERAIMAGEGENERATOR_H

@class NSString;
@protocol HFCameraImageGeneratorDelegate;

#import <Foundation/Foundation.h>


@interface HFCameraImageGenerator : NSObject

@property (weak, nonatomic) NSObject<HFCameraImageGeneratorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger imagesExpected; // ivar: _imagesExpected
@property (copy, nonatomic) NSString *key; // ivar: _key


-(id)initWithDelegate:(id)arg0 ;
-(void)generateImagesFromAsset:(id)arg0 forOffsets:(id)arg1 atSize:(struct CGSize )arg2 withKey:(id)arg3 ;


@end


#endif