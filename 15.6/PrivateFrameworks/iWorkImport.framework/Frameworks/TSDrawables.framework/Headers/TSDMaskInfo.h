// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMASKINFO_H
#define TSDMASKINFO_H

@class NSString, TSPObject<TSDOwningAttachment>;
@protocol TSDMixing, TSDInfoWithPathSource, TSDInfo;


#import "TSDDrawableInfo.h"
#import "TSDInfoGeometry.h"
#import "TSDPathSource.h"

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing, TSDInfoWithPathSource>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (copy, nonatomic) TSDPathSource *pathSource; // ivar: _pathSource
@property (readonly) Class superclass;


+(BOOL)wantsTitleAndCaptionUUIDs;
-(BOOL)isEqualToMaskInfo:(id)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 pathSource:(id)arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif