// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKALBUMEMPTYVIEW_H
#define NTKALBUMEMPTYVIEW_H

@class UIView, CLKDevice, UIImageView, UILabel, NSString;



@interface NTKAlbumEmptyView : UIView {
    CLKDevice *_device;
    UIImageView *_iconImageView;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
}


@property (retain, nonatomic) NSString *bodyLabelText; // ivar: _bodyLabelText
@property (retain, nonatomic) NSString *headerLabelText; // ivar: _headerLabelText


-(id)initForDevice:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif