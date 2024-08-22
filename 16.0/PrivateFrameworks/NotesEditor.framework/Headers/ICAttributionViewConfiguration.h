// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATTRIBUTIONVIEWCONFIGURATION_H
#define ICATTRIBUTIONVIEWCONFIGURATION_H

@class NSAttributedString, NSString, NSArray, UIImage, NSDate, NSMutableArray, TTTextEdit, NSOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICAttributionViewConfiguration.h"
#import "ICAttributionViewConfigurationSharedState.h"

@interface ICAttributionViewConfiguration : NSObject <NSCopying>



@property (nonatomic) CGRect adjustedFormattedTimestampFrame; // ivar: _adjustedFormattedTimestampFrame
@property (nonatomic) CGRect adjustedFrame; // ivar: _adjustedFrame
@property (nonatomic) CGFloat appliedHorizontalAdjustmentRatio; // ivar: _appliedHorizontalAdjustmentRatio
@property (nonatomic) CGRect associatedTextFrame; // ivar: _associatedTextFrame
@property (copy, nonatomic) NSAttributedString *attribution; // ivar: _attribution
@property (readonly, nonatomic) CGRect attributionFrame; // ivar: _attributionFrame
@property (retain, nonatomic) id *attributionTextStorage; // ivar: _attributionTextStorage
@property (readonly, nonatomic) NSString *attributionUserID;
@property (nonatomic, getter=isBlurred) BOOL blurred; // ivar: _blurred
@property (readonly, nonatomic) NSArray *childConfigurations; // ivar: _childConfigurations
@property (nonatomic, getter=isDataLoaded) BOOL dataLoaded; // ivar: _dataLoaded
@property (readonly, copy, nonatomic) UIImage *disclosureImage;
@property (readonly, nonatomic) CGRect disclosureImageFrame; // ivar: _disclosureImageFrame
@property (readonly, nonatomic) NSArray *editGroups; // ivar: _editGroups
@property (copy, nonatomic) NSDate *explicitTimestamp; // ivar: _explicitTimestamp
@property (nonatomic, getter=isFocused) BOOL focused; // ivar: _focused
@property (nonatomic) BOOL forceVisible; // ivar: _forceVisible
@property (nonatomic) BOOL forcesAttributionHidden; // ivar: _forcesAttributionHidden
@property (nonatomic) BOOL forcesTimestampHidden; // ivar: _forcesTimestampHidden
@property (copy, nonatomic) NSAttributedString *formattedTimestamp; // ivar: _formattedTimestamp
@property (readonly, nonatomic) CGRect formattedTimestampFrame; // ivar: _formattedTimestampFrame
@property (retain, nonatomic) id *formattedTimestampTextStorage; // ivar: _formattedTimestampTextStorage
@property (nonatomic) CGRect frame; // ivar: _frame
@property (retain, nonatomic) NSMutableArray *highlightConfigurations; // ivar: _highlightConfigurations
@property (readonly, nonatomic) BOOL isAttributionHidden;
@property (readonly, nonatomic) BOOL isDisclosureImageHidden;
@property (readonly, nonatomic) BOOL isStatusImageHidden;
@property (readonly, nonatomic) BOOL isTimestampHidden;
@property (weak, nonatomic) ICAttributionViewConfiguration *parentConfiguration; // ivar: _parentConfiguration
@property (nonatomic) CGFloat preferredHighlightValue; // ivar: _preferredHighlightValue
@property (nonatomic, getter=isPreview) BOOL preview; // ivar: _preview
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) ICAttributionViewConfigurationSharedState *sharedState; // ivar: _sharedState
@property (copy, nonatomic) UIImage *statusImage; // ivar: _statusImage
@property (readonly, nonatomic) CGRect statusImageFrame; // ivar: _statusImageFrame
@property (readonly, nonatomic) TTTextEdit *textEdit; // ivar: _textEdit
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) _NSRange trimmedRange; // ivar: _trimmedRange
@property (readonly, nonatomic) NSArray *unreadUserIDs; // ivar: _unreadUserIDs
@property (readonly, nonatomic) NSOrderedSet *userIDs;


+(id)loadDataQueue;
-(BOOL)hasValidRange;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttributionViewConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)editGroupForRange:(struct _NSRange )arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithSharedState:(id)arg0 editGroups:(id)arg1 parentConfiguration:(id)arg2 ;
-(id)initWithSharedState:(id)arg0 textEdit:(id)arg1 parentConfiguration:(id)arg2 ;
-(struct CGRect )rectForRange:(struct _NSRange )arg0 ;
-(void)addEditGroup:(id)arg0 ;
-(void)commonInitWithSharedState:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)drawStatusImageInContext:(struct CGContext *)arg0 canvasSize:(struct CGSize )arg1 ;
-(void)loadDataWithCompletion:(id)arg0 ;
-(void)synchronouslyLoadData;
-(void)updateAttribution;
-(void)updateAttributionTextStorage;
-(void)updateChildConfigurations;
-(void)updateFormattedTimestampTextStorage;
-(void)updateFrames;
-(void)updateHighlightAlpha;
-(void)updateHighlightFrames;
-(void)updateStatusImage;
-(void)updateTimestamp;
-(void)updateUnreadUserIDs;


@end


#endif