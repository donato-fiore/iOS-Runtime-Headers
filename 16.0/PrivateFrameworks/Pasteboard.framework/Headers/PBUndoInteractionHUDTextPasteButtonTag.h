// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUNDOINTERACTIONHUDTEXTPASTEBUTTONTAG_H
#define PBUNDOINTERACTIONHUDTEXTPASTEBUTTONTAG_H



#import "PBPasteButtonTag.h"

@interface PBUndoInteractionHUDTextPasteButtonTag : PBPasteButtonTag

@property (readonly) CGFloat minWidth; // ivar: _minWidth


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 ;
-(NSUInteger)hash;
// -(id)_acceptCalloutBarPasteButtonTagVisit:(id)arg0 systemInputAssistantPasteButtonTagVisit:(unk)arg1 undoInteractionHUDIconPasteButtonTagVisit:(id)arg2 undoInteractionHUDTextPasteButtonTagVisit:(unk)arg3 contextMenuPasteButtonTagVisit:(id)arg4 editMenuPasteButtonTagVisit:(unk)arg5  ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinWidth:(CGFloat)arg0 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(unsigned int)secureNameForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif