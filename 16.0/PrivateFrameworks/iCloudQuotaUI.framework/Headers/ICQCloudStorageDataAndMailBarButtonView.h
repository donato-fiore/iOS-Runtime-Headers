// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQCLOUDSTORAGEDATAANDMAILBARBUTTONVIEW_H
#define ICQCLOUDSTORAGEDATAANDMAILBARBUTTONVIEW_H

@class UIView, UILabel;



@interface ICQCloudStorageDataAndMailBarButtonView : UIView {
    UILabel *_data;
    UILabel *_dataSizes;
    UILabel *_mail;
    UILabel *_mailSizes;
}




+(id)barButtonItemWithData:(id)arg0 andMail:(id)arg1 ;
-(id)initWithData:(id)arg0 andMail:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif