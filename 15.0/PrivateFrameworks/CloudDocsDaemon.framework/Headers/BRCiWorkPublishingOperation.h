// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCIWORKPUBLISHINGOPERATION_H
#define BRCIWORKPUBLISHINGOPERATION_H

@class BRCOperation, NSArray, NSNumber, NSString;
@protocol BRCOperationSubclass;


#import "BRCItemID.h"
#import "BRCServerZone.h"

@interface BRCiWorkPublishingOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCItemID *_itemID;
    NSArray *_recordIDs;
    BOOL _forPublish;
    BOOL _readonly;
    NSNumber *_sharingInfo;
    BRCServerZone *_serverZone;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithDocumentItem:(id)arg0 forPublish:(BOOL)arg1 readonly:(BOOL)arg2 ;
-(void)_updateItemAfterShareCompleted;
-(void)main;


@end


#endif