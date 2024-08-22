// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSHARESHEETFILEITEMPROVIDER_H
#define WKSHARESHEETFILEITEMPROVIDER_H

@class UIActivityItemProvider;



@interface WKShareSheetFileItemProvider : UIActivityItemProvider {
    RetainPtr<NSURL> _url;
}




-(id)initWithURL:(id)arg0 ;
-(id)item;


@end


#endif