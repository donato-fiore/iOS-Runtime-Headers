// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSEMANTICSTYLESPREVIEWSTYLECOMMAND_H
#define CAMSEMANTICSTYLESPREVIEWSTYLECOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMSemanticStyle.h"

@interface CAMSemanticStylesPreviewStyleCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMSemanticStyle *_style; // ivar: __style


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(id)arg0 ;
-(id)initWithSubcommands:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif