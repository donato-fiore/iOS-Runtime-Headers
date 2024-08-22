// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCOUNTERROTATEINFO_H
#define TSDCOUNTERROTATEINFO_H

@class NSArray, NSString, TSPObject<TSDOwningAttachment>;
@protocol TSDResizingAwareInfo, TSDContainerInfo, TSDInfo;

#import <Foundation/Foundation.h>

#import "TSDDrawableInfo.h"
#import "TSDInfoGeometry.h"
#import "TSDGroupInfo.h"

@interface TSDCounterRotateInfo : NSObject <TSDResizingAwareInfo, TSDContainerInfo>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, weak, nonatomic) TSDDrawableInfo *childInfo; // ivar: _childInfo
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (nonatomic) CGAffineTransform counterTransform; // ivar: _counterTransform
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, weak, nonatomic) TSDGroupInfo *parentGroup; // ivar: _parentGroup
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly) Class superclass;


+(id)infoGeometryForTransformInRoot:(struct CGAffineTransform )arg0 isChildFlipped:(BOOL)arg1 ;
+(id)infoGeometryInRootIncludingCounterRotateIfNeededForDrawable:(id)arg0 ;
+(id)p_infoGeometryForCounterTransform:(struct CGAffineTransform )arg0 isChildFlipped:(BOOL)arg1 ;
+(struct CGAffineTransform )counterTransformForTransformInRoot:(struct CGAffineTransform )arg0 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyWithContext:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithChildInfo:(id)arg0 parentGroup:(id)arg1 counterTransform:(struct CGAffineTransform )arg2 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;


@end


#endif