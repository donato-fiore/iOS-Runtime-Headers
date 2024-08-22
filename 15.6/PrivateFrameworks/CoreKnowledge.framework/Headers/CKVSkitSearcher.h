// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSKITSEARCHER_H
#define CKVSKITSEARCHER_H

@class NSString;
@protocol CKVSpanMatchSearchIndex;

#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVSkitSearcher : NSObject <CKVSpanMatchSearchIndex>

 {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithIndexManager:(id)arg0 settings:(id)arg1 ;
-(id)locale;
-(id)searchIndexForTokenChain:(id)arg0 ;
-(void)prewarm;


@end


#endif