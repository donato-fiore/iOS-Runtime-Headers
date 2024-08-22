// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUILIKENESSSYSTEMIMAGEBADGE_H
#define CNUILIKENESSSYSTEMIMAGEBADGE_H

@class NSString, UIImage, NSData;
@protocol CNUILikenessBadge;

#import <Foundation/Foundation.h>


@interface CNUILikenessSystemImageBadge : NSObject <CNUILikenessBadge>



@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSystemImageNamed:(id)arg0 ;


@end


#endif