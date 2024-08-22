// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDOFFICEARTCLIENT_H
#define PDOFFICEARTCLIENT_H

@class NSString;
@protocol OADClient, OADImageRecolorInfoClient;

#import <Foundation/Foundation.h>

#import "OADImageRecolorInfo.h"
#import "PDPlaceholder.h"
#import "PDAnimationInfo.h"

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient>

 {
    OADImageRecolorInfo *mImageRecolorInfo;
    PDPlaceholder *mPlaceholder;
    BOOL mIsComment;
    PDAnimationInfo *mAnimationInfo;
    BOOL mHasOleChart;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int inheritedTextStylePlaceholderType; // ivar: mInheritedTextStylePlaceholderType
@property (readonly) Class superclass;


-(BOOL)hasAnimationInfo;
-(BOOL)hasBounds;
-(BOOL)hasOleChart;
-(BOOL)hasPlaceholder;
-(BOOL)isComment;
-(id)animationInfo;
-(id)imageRecolorInfo;
-(id)init;
-(id)placeholder;
-(struct CGRect )bounds;
-(void)setAnimationInfo:(id)arg0 ;
-(void)setHasOleChart:(BOOL)arg0 ;
-(void)setImageRecolorInfo:(id)arg0 ;
-(void)setIsComment:(BOOL)arg0 ;
-(void)setPlaceholder:(id)arg0 ;


@end


#endif