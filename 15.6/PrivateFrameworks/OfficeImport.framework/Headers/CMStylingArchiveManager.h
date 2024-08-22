// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSTYLINGARCHIVEMANAGER_H
#define CMSTYLINGARCHIVEMANAGER_H

@class NSMutableString, NSMutableDictionary;


#import "CMArchiveManager.h"

@interface CMStylingArchiveManager : CMArchiveManager {
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
}




-(id)addCssStyle:(id)arg0 ;
-(id)commitStylesheet;
-(id)cssStylesheetString;
-(id)init;
-(void)addCssStyle:(id)arg0 withName:(id)arg1 ;


@end


#endif