// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLZEROKEYWORDSTORE_H
#define PLZEROKEYWORDSTORE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLZeroKeywordStore : NSObject {
    NSString *_storePath;
}




+(id)expectedClasses;
-(id)currentZeroKeywords;
-(id)initWithPath:(id)arg0 ;
-(void)deleteStore;
-(void)updateZeroKeywordsTo:(id)arg0 ;


@end


#endif