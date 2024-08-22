// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERRECENTSBUTTONITEM_H
#define AVTSTICKERRECENTSBUTTONITEM_H

@class NSString, UIImage, NSURL;
@protocol AVTStickerRecentsItem;

#import <Foundation/Foundation.h>


@interface AVTStickerRecentsButtonItem : NSObject <AVTStickerRecentsItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discardableContentHandler; // ivar: discardableContentHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) id *provider;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)cellIdentifier;
-(id)initWithLocalizedDescription:(id)arg0 ;
-(void)discardContent;


@end


#endif