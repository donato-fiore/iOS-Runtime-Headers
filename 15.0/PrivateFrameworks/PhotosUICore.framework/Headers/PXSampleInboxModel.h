// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSAMPLEINBOXMODEL_H
#define PXSAMPLEINBOXMODEL_H

@class NSArray, NSDate, NSString;
@protocol PXInboxPreviewItem, PXInboxModel;

#import <Foundation/Foundation.h>


@interface PXSampleInboxModel : NSObject <PXInboxPreviewItem, PXInboxModel>



@property (nonatomic) NSUInteger assetsCount; // ivar: _assetsCount
@property (readonly, nonatomic) NSArray *assetsForOneUp; // ivar: _assetsForOneUp
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *inboxModelTitle; // ivar: _inboxModelTitle
@property (readonly, nonatomic) NSInteger inboxModelType; // ivar: _inboxModelType
@property (readonly, nonatomic) NSString *keyCommentGUID;
@property (readonly, nonatomic) NSArray *leftPreviewItems;
@property (readonly, nonatomic) NSString *ownerEmail;
@property (readonly, nonatomic) NSString *ownerFirstName;
@property (readonly, nonatomic) NSString *ownerLastName;
@property (nonatomic, getter=isSeen) BOOL seen; // ivar: _seen
@property (copy, nonatomic) NSArray *senderNames; // ivar: _senderNames
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) BOOL userIsSender; // ivar: _userIsSender


+(id)oldDate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif