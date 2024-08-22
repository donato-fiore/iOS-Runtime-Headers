// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSTARTPAGEBACKGROUNDIMAGEMODEL_H
#define SFSTARTPAGEBACKGROUNDIMAGEMODEL_H

@class WBSStartPageBackgroundImagesDataSource, WBSStartPageBackgroundImageDescription, NSItemProvider;

#import <Foundation/Foundation.h>


@interface SFStartPageBackgroundImageModel : NSObject {
    WBSStartPageBackgroundImagesDataSource *_dataSource;
    NSInteger _index;
}


@property (readonly, nonatomic) WBSStartPageBackgroundImageDescription *imageDescription;
@property (readonly, nonatomic) BOOL isCustomImage;
@property (readonly, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIndex:(NSInteger)arg0 inDataSource:(id)arg1 selected:(BOOL)arg2 ;
-(id)initWithItemProvider:(id)arg0 ;
-(void)getThumbnailImageWithCompletionHandler:(id)arg0 ;


@end


#endif