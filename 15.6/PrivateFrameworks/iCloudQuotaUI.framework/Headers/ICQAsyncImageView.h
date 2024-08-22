// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQASYNCIMAGEVIEW_H
#define ICQASYNCIMAGEVIEW_H

@class UIImageView, NSURL;



@interface ICQAsyncImageView : UIImageView

@property (retain, nonatomic) NSURL *currentImageURL; // ivar: _currentImageURL


-(id)initWithURL:(id)arg0 ;
-(void)loadImageFromURL:(id)arg0 ;
-(void)updateToImageFromURL:(id)arg0 ;


@end


#endif