// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLISTIMAGEROWITEM_H
#define CPLISTIMAGEROWITEM_H

@class NSString, NSArray, NSUUID;
@protocol CPListItemPrivate, NSSecureCoding, CPSelectableListItem;

#import <Foundation/Foundation.h>

#import "CPListTemplate.h"

@interface CPListImageRowItem : NSObject <CPListItemPrivate, NSSecureCoding, CPSelectableListItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSArray *gridImages;
@property (retain, nonatomic) NSArray *gridImagesSet; // ivar: _gridImagesSet
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) id *listImageRowHandler; // ivar: _listImageRowHandler
@property (weak, nonatomic) CPListTemplate *listTemplate; // ivar: _listTemplate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(struct CGSize )maximumImageSize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 images:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateImages:(id)arg0 ;


@end


#endif