// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSLICESTROKESCOMMAND_H
#define PKSLICESTROKESCOMMAND_H

@class NSDictionary;


#import "PKModifyStrokesCommand.h"

@interface PKSliceStrokesCommand : PKModifyStrokesCommand

@property (readonly, nonatomic) NSDictionary *substrokes; // ivar: _substrokes


-(id)description;
-(id)initWithDrawingUUID:(id)arg0 actionName:(id)arg1 substrokes:(id)arg2 strokesHidden:(id)arg3 hiding:(BOOL)arg4 ;
-(id)invertedInDrawing:(id)arg0 ;
-(void)applyToDrawing:(id)arg0 ;


@end


#endif