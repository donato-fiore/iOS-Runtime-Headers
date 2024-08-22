// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIIMAGEACCESSORYVIEWCONTROLLER_H
#define SEARCHUIIMAGEACCESSORYVIEWCONTROLLER_H



#import "SearchUIAccessoryViewController.h"
#import "SearchUIImageView.h"

@interface SearchUIImageAccessoryViewController : SearchUIAccessoryViewController

@property (retain) SearchUIImageView *view;


+(BOOL)resultIsLegacySiriAction:(id)arg0 ;
+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)containsSymbolImage;
-(NSUInteger)type;
-(id)setupView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif