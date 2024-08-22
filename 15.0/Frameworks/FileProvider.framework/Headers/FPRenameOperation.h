// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPRENAMEOPERATION_H
#define FPRENAMEOPERATION_H

@class NSString;


#import "FPActionOperation.h"
#import "FPItem.h"

@interface FPRenameOperation : FPActionOperation {
    FPItem *_item;
    NSString *_newName;
}




-(id)fp_prettyDescription;
-(id)initWithItem:(id)arg0 newDisplayName:(id)arg1 ;
-(id)initWithItem:(id)arg0 newFileName:(id)arg1 ;
-(id)initWithItem:(id)arg0 newName:(id)arg1 ;
-(void)actionMain;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;


@end


#endif