// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISUIACTIVITYEXTENSIONITEMDATAREQUEST_H
#define UISUIACTIVITYEXTENSIONITEMDATAREQUEST_H

@class NSDictionary, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger activityCategory; // ivar: _activityCategory
@property (retain, nonatomic) NSDictionary *activitySpecificMetadata; // ivar: _activitySpecificMetadata
@property (nonatomic) BOOL activitySupportsPromiseURLs; // ivar: _activitySupportsPromiseURLs
@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (retain, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (readonly, nonatomic) Class classForPreparingExtensionItemData; // ivar: _classForPreparingExtensionItemData
@property (nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (nonatomic) BOOL isAirDropActivity; // ivar: _isAirDropActivity
@property (nonatomic) NSInteger maxPreviews; // ivar: _maxPreviews
@property (nonatomic) BOOL sourceAppIsManaged; // ivar: _sourceAppIsManaged
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize
@property (nonatomic) BOOL wantsAttachmentURLItemData; // ivar: _wantsAttachmentURLItemData
@property (nonatomic) BOOL wantsThumbnailItemData; // ivar: _wantsThumbnailItemData


+(BOOL)supportsSecureCoding;
+(id)requestForActivity:(id)arg0 activityType:(id)arg1 ;
+(id)requestForActivity:(id)arg0 activityType:(id)arg1 activitySpecificMetadata:(id)arg2 ;
+(id)requestForActivity:(id)arg0 activityType:(id)arg1 sourceAppIsManaged:(BOOL)arg2 ;
-(id)_initWithClassForPreparingExtensionItemData:(Class)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif