// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLSINGLEITEMTHUMBNAILGENERATOR_H
#define QLSINGLEITEMTHUMBNAILGENERATOR_H

@class UIImage, NSString;
@protocol QLItemThumbnailGeneratorProtocolInternal, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "QLItem.h"
#import "QLItemThumbnailGenerator.h"

@interface QLSingleItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocolInternal, NSSecureCoding>

 {
    UIImage *_thumbnail;
    CGSize _thumbnailSize;
    BOOL _isRepresentative;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) QLItem *item; // ivar: _item
@property (readonly) Class superclass;
@property (retain, nonatomic) QLItemThumbnailGenerator *thumbnailGenerator; // ivar: _thumbnailGenerator


+(BOOL)supportsSecureCoding;
-(id)genericIconWithSize:(struct CGSize )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(void)_handleThumbnailGenerationFinishedWithThumbnail:(id)arg0 size:(struct CGSize )arg1 clientCompletionBlock:(id)arg2 ;
-(void)_provideThumbnailForUbiquitousURLWithSize:(struct CGSize )arg0 completionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateThumbnailWithSize:(struct CGSize )arg0 completionBlock:(id)arg1 ;


@end


#endif