// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYPARTICIPANTTABLECELLMODEL_H
#define PXSHAREDLIBRARYPARTICIPANTTABLECELLMODEL_H

@class NSString, UIImage;


#import "PXObservable.h"

@interface PXSharedLibraryParticipantTableCellModel : PXObservable

@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) BOOL ellipsisButtonAllowed; // ivar: _ellipsisButtonAllowed
@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL removeButtonVisible; // ivar: _removeButtonVisible
@property (readonly, nonatomic) NSInteger requestID; // ivar: _requestID


-(id)init;
-(void)configureForParticipant:(id)arg0 displayScale:(CGFloat)arg1 isRTL:(BOOL)arg2 ;


@end


#endif