// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DDOCUMENTDATACACHE_H
#define TSCH3DDOCUMENTDATACACHE_H

@class TSKDocumentRoot;

#import <Foundation/Foundation.h>


@interface TSCH3DDocumentDataCache : NSObject {
    TSKDocumentRoot *_documentRoot;
}




+(id)dataCacheWithDocumentRoot:(id)arg0 ;
+(id)dataFromCache:(id)arg0 forFile:(id)arg1 group:(id)arg2 generateBlock:(id)arg3 ;
-(BOOL)debug_nukeDocumentCachePathForGroup:(id)arg0 ;
-(id)dataForFile:(id)arg0 group:(id)arg1 generateBlock:(id)arg2 ;
-(id)init;
-(id)initWithDocumentRoot:(id)arg0 ;


@end


#endif