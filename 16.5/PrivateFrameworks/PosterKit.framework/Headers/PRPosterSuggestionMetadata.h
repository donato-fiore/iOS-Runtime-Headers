// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERSUGGESTIONMETADATA_H
#define PRPOSTERSUGGESTIONMETADATA_H

@class NSString, NSDate, NSDictionary, ATXFaceGalleryItem;
@protocol BSDescriptionStreamable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRPosterSuggestionMetadata : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, copy, nonatomic) NSDictionary *suggestedComplicationsByIdentifier; // ivar: _suggestedComplicationsByIdentifier
@property (readonly, nonatomic) ATXFaceGalleryItem *suggestedGalleryItem; // ivar: _suggestedGalleryItem
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestedGalleryItem:(id)arg0 suggestedComplicationsByIdentifier:(id)arg1 lastModifiedDate:(id)arg2 ;
-(id)metadataBySettingLastModifiedDateToNow;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif