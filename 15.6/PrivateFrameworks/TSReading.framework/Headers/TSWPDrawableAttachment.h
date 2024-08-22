// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPDRAWABLEATTACHMENT_H
#define TSWPDRAWABLEATTACHMENT_H



#import "TSWPAttachment.h"
#import "TSDDrawableInfo.h"

@interface TSWPDrawableAttachment : TSWPAttachment

@property (nonatomic) CGFloat attachmentAnchorY; // ivar: _attachmentAnchorY
@property (readonly, nonatomic) CGFloat descent;
@property (readonly, retain, nonatomic) TSDDrawableInfo *drawable; // ivar: _drawableInfo
@property (nonatomic) CGFloat hOffset; // ivar: _hOffset
@property (nonatomic) int hOffsetType; // ivar: _hOffsetType
@property (nonatomic) int vAlignment; // ivar: _vAlignment
@property (nonatomic) CGFloat vOffset; // ivar: _vOffset
@property (nonatomic) int vOffsetType; // ivar: _vOffsetType


+(void)setPositionerClass:(Class)arg0 ;
-(BOOL)isAnchored;
-(BOOL)isDrawable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHTMLWrap;
-(BOOL)isPartitioned;
-(BOOL)isSearchable;
-(BOOL)specifiesEnabledKnobMask;
-(Class)positionerClass;
-(NSUInteger)enabledKnobMask;
-(id)copyWithContext:(id)arg0 ;
-(id)detachDrawable;
-(id)init;
-(id)initWithContext:(id)arg0 drawable:(id)arg1 ;
-(id)textRepresentationForCopy;
-(id)textStorages;
-(int)elementKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)attachDrawable:(id)arg0 ;
-(void)dealloc;
-(void)infoChanged;
-(void)invalidate;
-(void)setParentStorage:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif