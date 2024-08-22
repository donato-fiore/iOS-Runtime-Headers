// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPCREATEFOLDEROPERATION_H
#define FPCREATEFOLDEROPERATION_H

@class NSString;


#import "FPActionOperation.h"
#import "FPItem.h"
#import "FPItemID.h"

@interface FPCreateFolderOperation : FPActionOperation {
    FPItem *_parentItem;
    NSString *_folderFilename;
    FPItemID *_placeholderID;
}


@property (copy, nonatomic) id *createFolderCompletionBlock; // ivar: _createFolderCompletionBlock
@property (nonatomic) BOOL shouldBounceOnCollision; // ivar: _shouldBounceOnCollision


-(id)initWithParentItem:(id)arg0 folderName:(id)arg1 ;
-(void)actionMain;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;


@end


#endif