// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPATTACHMENT_H
#define TSWPATTACHMENT_H

@class NSString;
@protocol TSKDocumentObject, TSDOwningAttachment, TSPCopying;


#import "TSPObject.h"
#import "TSWPStorage.h"

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger enabledKnobMask;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL isAttachedToBodyText;
@property (readonly, nonatomic) BOOL isDrawable;
@property (readonly, nonatomic) BOOL isPartitioned;
@property (readonly, nonatomic) BOOL isSearchable;
@property (nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (readonly, nonatomic) Class positionerClass;
@property (readonly, nonatomic) BOOL specifiesEnabledKnobMask;
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(unsigned int)attributeArrayKind;
-(BOOL)changesWithPageCount;
-(BOOL)changesWithPageNumber;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)findCharIndex;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)topLevelAttachment;
-(int)elementKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)infoChanged;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif