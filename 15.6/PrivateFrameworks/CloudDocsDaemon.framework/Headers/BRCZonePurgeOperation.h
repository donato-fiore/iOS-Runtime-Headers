// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCZONEPURGEOPERATION_H
#define BRCZONEPURGEOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCPrivateServerZone.h"

@interface BRCZonePurgeOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCPrivateServerZone *_serverZone;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithServerZone:(id)arg0 ;
-(void)main;


@end


#endif