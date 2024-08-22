// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHAREROWITEM_H
#define SHAREROWITEM_H

@class CNContact, NSString, UIImage, PKPassShare, UIColor;
@protocol PKIdentifiable, NSCopying;

#import <Foundation/Foundation.h>


@interface ShareRowItem : NSObject <PKIdentifiable>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFetchedContact; // ivar: _hasFetchedContact
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) BOOL isAddShareItem; // ivar: _isAddShareItem
@property (nonatomic) BOOL isStopSharingItem; // ivar: _isStopSharingItem
@property (retain, nonatomic) PKPassShare *share; // ivar: _share
@property (nonatomic) BOOL shouldCenterText; // ivar: _shouldCenterText
@property (nonatomic) BOOL showContactAvatar; // ivar: _showContactAvatar
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToareRowItem:(id)arg0 ;


@end


#endif