// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLISTITEM_H
#define CPLISTITEM_H

@class UIImage, NSString, NSUUID;
@protocol CPListItemPrivate, NSSecureCoding, CPSelectableListItem;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"
#import "CPListTemplate.h"

@interface CPListItem : NSObject <CPListItemPrivate, NSSecureCoding, CPSelectableListItem>



@property (readonly, nonatomic) UIImage *accessoryImage;
@property (retain, nonatomic) CPImageSet *accessoryImageSet; // ivar: _accessoryImageSet
@property (nonatomic) NSInteger accessoryType; // ivar: _accessoryType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent; // ivar: _explicitContent
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (weak, nonatomic) CPListTemplate *listTemplate; // ivar: _listTemplate
@property (nonatomic) CGFloat playbackProgress; // ivar: _playbackProgress
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic) NSInteger playingIndicatorLocation; // ivar: _playingIndicatorLocation
@property (readonly, nonatomic) BOOL showsDisclosureIndicator; // ivar: _showsDisclosureIndicator
@property (nonatomic) BOOL showsExplicitLabel;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(struct CGSize )maximumImageSize;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 detailText:(id)arg1 ;
-(id)initWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 ;
-(id)initWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 accessoryImage:(id)arg3 accessoryType:(NSInteger)arg4 ;
-(id)initWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 showsDisclosureIndicator:(BOOL)arg3 ;
-(void)_setNeedsUpdate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif