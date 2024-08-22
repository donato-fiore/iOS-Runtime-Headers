// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPAPERIMAGEINSERTIONCONTROLLER_H
#define ICPAPERIMAGEINSERTIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "ICNoteEditorViewController.h"

@interface ICPaperImageInsertionController : NSObject

@property (weak, nonatomic) ICNoteEditorViewController *noteEditor; // ivar: _noteEditor


-(BOOL)shouldAddImagesToPaper;
-(id)initWithNoteEditorViewController:(id)arg0 ;
-(void)addImagesToPaperWithItemProviders:(id)arg0 ;


@end


#endif