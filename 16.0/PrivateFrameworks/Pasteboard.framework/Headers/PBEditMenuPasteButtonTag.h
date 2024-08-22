// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBEDITMENUPASTEBUTTONTAG_H
#define PBEDITMENUPASTEBUTTONTAG_H



#import "PBPasteButtonTag.h"

@interface PBEditMenuPasteButtonTag : PBPasteButtonTag

@property (readonly) CGPoint contentOrigin; // ivar: _contentOrigin
@property (readonly) NSUInteger displayMode; // ivar: _displayMode
@property (readonly) unsigned int secureName; // ivar: _secureName
@property (readonly) CGSize size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 ;
-(NSUInteger)hash;
// -(id)_acceptCalloutBarPasteButtonTagVisit:(id)arg0 systemInputAssistantPasteButtonTagVisit:(unk)arg1 undoInteractionHUDIconPasteButtonTagVisit:(id)arg2 undoInteractionHUDTextPasteButtonTagVisit:(unk)arg3 contextMenuPasteButtonTagVisit:(id)arg4 editMenuPasteButtonTagVisit:(unk)arg5  ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSecureName:(unsigned int)arg0 size:(struct CGSize )arg1 contentOrigin:(struct CGPoint )arg2 displayMode:(NSUInteger)arg3 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(unsigned int)secureNameForStyle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif