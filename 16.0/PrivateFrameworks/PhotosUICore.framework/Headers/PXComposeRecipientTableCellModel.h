// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOMPOSERECIPIENTTABLECELLMODEL_H
#define PXCOMPOSERECIPIENTTABLECELLMODEL_H

@class NSString, CNContact, UIImage;


#import "PXObservable.h"

@interface PXComposeRecipientTableCellModel : PXObservable

@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, nonatomic) BOOL checked; // ivar: _checked
@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSInteger imageRequestID; // ivar: _imageRequestID
@property (readonly, nonatomic) BOOL isValidAddress; // ivar: _isValidAddress
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL showsCheckbox; // ivar: _showsCheckbox


-(id)init;
-(void)performChanges:(id)arg0 ;


@end


#endif