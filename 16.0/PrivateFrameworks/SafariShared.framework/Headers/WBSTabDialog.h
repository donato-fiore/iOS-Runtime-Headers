// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTABDIALOG_H
#define WBSTABDIALOG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSTabDialog : NSObject {
    id *_presentationBlock;
    id *_dismissalBlock;
}


@property (nonatomic) BOOL blocksWebProcessUntilDismissed; // ivar: _blocksWebProcessUntilDismissed
@property (copy, nonatomic) NSArray *cancellationExemptions; // ivar: _cancellationExemptions


// +(id)tabDialogWithPresentationBlock:(id)arg0 dismissalBlock:(unk)arg1  ;
-(id)_init;
-(id)createInfo;
-(id)init;


@end


#endif