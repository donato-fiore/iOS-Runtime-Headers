// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIURLDRAGPREVIEWVIEW_H
#define UIURLDRAGPREVIEWVIEW_H

@class NSArray, NSString, NSURL;


#import "UIView.h"
#import "UILabel.h"

@interface UIURLDragPreviewView : UIView {
    UILabel *_titleLabel;
    UILabel *_urlLabel;
    NSArray *_titleAndUrlConstraints;
    NSArray *_urlOnlyConstraints;
}


@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (copy, nonatomic) NSString *urlText; // ivar: _urlText


+(id)viewWithTitle:(id)arg0 URL:(id)arg1 ;
+(id)viewWithTitle:(id)arg0 URLText:(id)arg1 ;
+(id)viewWithURL:(id)arg0 ;
+(id)viewWithURLText:(id)arg0 ;
+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif