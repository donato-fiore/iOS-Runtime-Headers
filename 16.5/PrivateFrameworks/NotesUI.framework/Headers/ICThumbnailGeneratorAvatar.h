// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILGENERATORAVATAR_H
#define ICTHUMBNAILGENERATORAVATAR_H

@class CNAvatarImageRenderer;


#import "ICThumbnailGenerator.h"

@interface ICThumbnailGeneratorAvatar : ICThumbnailGenerator

@property (readonly, nonatomic, getter=isRTL) BOOL RTL; // ivar: _RTL
@property (readonly, nonatomic) CNAvatarImageRenderer *renderer; // ivar: _renderer


-(id)initWithManagedObjectContext:(id)arg0 ;
-(void)drawWithBorderIntoContext:(struct CGContext *)arg0 avatarImage:(id)arg1 ;
-(void)generateThumbnailWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif