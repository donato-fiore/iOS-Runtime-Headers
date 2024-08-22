// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSEARCHMETADATASTORE_H
#define PLSEARCHMETADATASTORE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLSearchMetadataStore : NSObject {
    NSString *_storePath;
}




-(id)currentSearchMetadata;
-(id)initWithPath:(id)arg0 ;
-(void)deleteStore;
-(void)updateSearchMetadataTo:(id)arg0 ;


@end


#endif