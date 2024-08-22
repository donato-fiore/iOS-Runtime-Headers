// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMDICTARCHIVEMANAGER_H
#define CMDICTARCHIVEMANAGER_H

@class NSMutableDictionary, NSString, NSMutableString;


#import "CMStylingArchiveManager.h"

@interface CMDictArchiveManager : CMStylingArchiveManager {
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    BOOL mIsFrameset;
}




-(NSUInteger)resourceCount;
-(id)copyDictionaryWithSizeInfos:(BOOL)arg0 ;
-(id)copyResourceWithName:(id)arg0 type:(int)arg1 ;
-(id)initWithName:(id)arg0 resourcePathPrefix:(id)arg1 ;
-(id)name;
-(id)resourceUrlProtocol;
-(void)pushCssToPath:(id)arg0 ;
-(void)pushData:(id)arg0 toPath:(id)arg1 ;
-(void)pushText:(id)arg0 toPath:(id)arg1 ;
-(void)setIsFrameset;


@end


#endif