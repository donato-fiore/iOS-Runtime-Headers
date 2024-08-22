// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBCALLOUTBARPASTEBUTTONTAG_H
#define PBCALLOUTBARPASTEBUTTONTAG_H



#import "PBPasteButtonTag.h"

@interface PBCalloutBarPasteButtonTag : PBPasteButtonTag

@property (readonly) NSUInteger contentScaleLevel; // ivar: _contentScaleLevel
@property (readonly) unsigned int secureName; // ivar: _secureName
@property (readonly) CGSize size; // ivar: _size
@property (readonly) CGPoint titleOrigin; // ivar: _titleOrigin
@property (readonly) CGFloat titleWidth; // ivar: _titleWidth


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 ;
-(NSUInteger)hash;
// -(id)_acceptCalloutBarPasteButtonTagVisit:(id)arg0 systemInputAssistantPasteButtonTagVisit:(unk)arg1 undoInteractionHUDIconPasteButtonTagVisit:(id)arg2 undoInteractionHUDTextPasteButtonTagVisit:(unk)arg3 contextMenuPasteButtonTagVisit:(id)arg4 editMenuPasteButtonTagVisit:(unk)arg5  ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSecureName:(unsigned int)arg0 size:(struct CGSize )arg1 titleOrigin:(struct CGPoint )arg2 titleWidth:(CGFloat)arg3 contentScaleLevel:(NSUInteger)arg4 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(unsigned int)secureNameForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif