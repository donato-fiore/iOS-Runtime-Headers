// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPICTUREITEMCONTAINER_H
#define GEOPICTUREITEMCONTAINER_H

@class NSArray;
@protocol GEOPictureItemContainer;

#import <Foundation/Foundation.h>


@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer>



@property (readonly, nonatomic) BOOL allowFullScreenPhoto; // ivar: _allowFullScreenPhoto
@property (readonly, nonatomic) NSArray *pictureItems; // ivar: _pictureItems


-(id)init;
-(id)initWithPictureItemContainer:(id)arg0 ;
-(id)initWithPictureItems:(id)arg0 allowFullScreenPhoto:(BOOL)arg1 ;


@end


#endif