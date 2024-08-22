// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDDEFAULTTEXTPROPERTY_H
#define CHDDEFAULTTEXTPROPERTY_H

@class NSString;
@protocol EDKeyedObject;

#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDRunsCollection.h"

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject>

 {
    EDResources *mResources;
    int mDefaultTextType;
    NSUInteger mContentFormatId;
    EDRunsCollection *mRuns;
    int mLabelPosition;
    BOOL mShowCategoryLabel;
    BOOL mShowValueLabel;
    BOOL mShowPercentageLabel;
    BOOL mShowSeriesLabel;
    BOOL mShowBubbleSizeLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultTextPropertyWithResources:(id)arg0 ;
-(BOOL)isShowBubbleSizeLabel;
-(BOOL)isShowCategoryLabel;
-(BOOL)isShowPercentageLabel;
-(BOOL)isShowSeriesLabel;
-(BOOL)isShowValueLabel;
-(NSInteger)key;
-(NSUInteger)contentFormatId;
-(id)contentFormat;
-(id)initWithResources:(id)arg0 ;
-(id)runs;
-(int)defaultTextType;
-(int)labelPosition;
-(void)setContentFormat:(id)arg0 ;
-(void)setContentFormatId:(NSUInteger)arg0 ;
-(void)setDefaultTextType:(int)arg0 ;
-(void)setIsShowBubbleSizeLabel:(BOOL)arg0 ;
-(void)setIsShowCategoryLabel:(BOOL)arg0 ;
-(void)setIsShowPercentageLabel:(BOOL)arg0 ;
-(void)setIsShowSeriesLabel:(BOOL)arg0 ;
-(void)setIsShowValueLabel:(BOOL)arg0 ;
-(void)setLabelPosition:(int)arg0 ;
-(void)setRuns:(id)arg0 ;


@end


#endif