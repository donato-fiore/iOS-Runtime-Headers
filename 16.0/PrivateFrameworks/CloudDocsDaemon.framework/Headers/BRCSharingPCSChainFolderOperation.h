// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSHARINGPCSCHAINFOLDEROPERATION_H
#define BRCSHARINGPCSCHAINFOLDEROPERATION_H

@class BRCFrameworkOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerItem.h"
#import "BRCAppLibrary.h"
#import "BRCItemID.h"

@interface BRCSharingPCSChainFolderOperation : BRCFrameworkOperation <BRCOperationSubclass>

 {
    BRCServerItem *_serverItem;
    BRCAppLibrary *_appLibrary;
    NSUInteger _chainedRecordsCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BRCItemID *rootItemID;
@property (readonly) Class superclass;


-(id)createActivity;
-(id)initWithItem:(id)arg0 ;
-(void)_performPCSChainBatch;
-(void)main;


@end


#endif