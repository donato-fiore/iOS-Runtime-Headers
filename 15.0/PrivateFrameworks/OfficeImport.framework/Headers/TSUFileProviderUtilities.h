// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUFILEPROVIDERUTILITIES_H
#define TSUFILEPROVIDERUTILITIES_H


#import <Foundation/Foundation.h>


@interface TSUFileProviderUtilities : NSObject



+(void)bookmarkableStringFromDocumentURL:(id)arg0 completion:(id)arg1 ;
+(void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg0 completion:(id)arg1 ;
+(void)fetchAlternateContentsURLForDocumentURL:(id)arg0 completion:(id)arg1 ;
+(void)initialize;
+(void)setAlternateContentsURL:(id)arg0 onDocumentURL:(id)arg1 completion:(id)arg2 ;
-(id)init;


@end


#endif