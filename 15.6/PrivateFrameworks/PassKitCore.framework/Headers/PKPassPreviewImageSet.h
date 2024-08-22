// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSPREVIEWIMAGESET_H
#define PKPASSPREVIEWIMAGESET_H



#import "PKPassImageSet.h"
#import "PKImage.h"

@interface PKPassPreviewImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) PKImage *notificationIconImage; // ivar: _notificationIconImage
@property (retain, nonatomic) PKImage *rawIcon; // ivar: _rawIcon


+(BOOL)supportsSecureCoding;
+(NSInteger)imageSetType;
+(id)archiveName;
+(unsigned int)currentVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preheatImages;


@end


#endif