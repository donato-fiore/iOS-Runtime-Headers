// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI27SHARESHEETIMAGEITEMPROVIDER_H
#define _TTC9SEYMOURUI27SHARESHEETIMAGEITEMPROVIDER_H

@class UIActivityItemProvider;



@interface _TtC9SeymourUI27ShareSheetImageItemProvider : UIActivityItemProvider {
    ? artworkItemProvider;
    ? lock;
    ? loadedImage;
    ? timeout;
}


@property (nonatomic, readonly) id *item;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg0 ;


@end


#endif