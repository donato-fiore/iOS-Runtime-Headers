// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWGLYPHICON_H
#define WFWORKFLOWGLYPHICON_H



#import "WFIcon.h"
#import "WFIconBackground.h"

@interface WFWorkflowGlyphIcon : WFIcon

@property (readonly, nonatomic) WFIconBackground *background; // ivar: _background
@property (readonly, nonatomic) unsigned short glyph; // ivar: _glyph


+(BOOL)supportsSecureCoding;
-(BOOL)hasClearBackground;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGlyph:(unsigned short)arg0 background:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif