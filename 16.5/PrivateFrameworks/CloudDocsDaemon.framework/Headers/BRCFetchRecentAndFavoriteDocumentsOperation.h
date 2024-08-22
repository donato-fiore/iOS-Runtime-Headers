// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFETCHRECENTANDFAVORITEDOCUMENTSOPERATION_H
#define BRCFETCHRECENTANDFAVORITEDOCUMENTSOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerZone.h"

@interface BRCFetchRecentAndFavoriteDocumentsOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCServerZone *_serverZone;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithServerZone:(id)arg0 ;
-(void)_performQueryOperationForBit:(unsigned int)arg0 index:(id)arg1 completion:(id)arg2 ;
-(void)main;


@end


#endif