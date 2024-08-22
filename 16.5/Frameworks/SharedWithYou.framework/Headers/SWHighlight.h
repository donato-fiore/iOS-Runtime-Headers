// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWHIGHLIGHT_H
#define SWHIGHLIGHT_H

@class NSURL, SLHighlight;
@protocol NSSecureCoding, NSCopying, NSSecureCoding><NSCopying;

#import <Foundation/Foundation.h>


@interface SWHighlight : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSObject<NSSecureCoding><NSCopying> *identifier; // ivar: _identifier
@property (retain, nonatomic, setter=_setSLHighlight:) SLHighlight *slHighlight; // ivar: _slHighlight


+(BOOL)supportsSecureCoding;
+(id)highlightsForSLHighlights:(id)arg0 ;
+(id)requiredSpotlightAttributeKeys;
+(unsigned char)highlightContentTypeForType:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLocalResource;
-(BOOL)isSyndicatableMedia;
-(NSUInteger)hash;
-(id)attributions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hideContextMenu;
-(id)initWithCSSearchableItem:(id)arg0 error:(*id)arg1 ;
-(id)initWithCSSearchableItemUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithCSSearchableItemUniqueIdentifier:(id)arg0 forType:(unsigned char)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSLHighlight:(id)arg0 ;
-(id)replyContextMenuWithPresentingViewController:(id)arg0 ;
-(id)resourceUTI;
-(id)stringIdentifier;
-(id)timestamp;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif