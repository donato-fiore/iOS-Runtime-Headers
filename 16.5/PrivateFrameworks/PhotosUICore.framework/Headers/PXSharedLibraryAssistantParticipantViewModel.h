// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYASSISTANTPARTICIPANTVIEWMODEL_H
#define PXSHAREDLIBRARYASSISTANTPARTICIPANTVIEWMODEL_H

@class UIImage, NSString;


#import "PXObservable.h"

@interface PXSharedLibraryAssistantParticipantViewModel : PXObservable

@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(void)performChanges:(id)arg0 ;


@end


#endif