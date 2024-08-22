// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIFOOTERELEMENT_H
#define RUIFOOTERELEMENT_H



#import "RUIElement.h"
#import "RemoteUISectionFooter.h"

@interface RUIFooterElement : RUIElement {
    RemoteUISectionFooter *_footerView;
}




-(NSInteger)labelAlignment;
-(id)linkURL;
-(void)configureView:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif