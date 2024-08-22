// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCXCONTENTTYPES_H
#define OCXCONTENTTYPES_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OCXContentTypes : NSObject {
    NSMutableArray *mContentTypes;
    NSMutableSet *mDefaultTypes;
    NSMutableDictionary *mContentTypeObjectMap;
    NSMutableDictionary *mContentTypeCountMap;
}




+(id)relativePathForPath:(id)arg0 currentPath:(id)arg1 ;
-(BOOL)containsContentType:(id)arg0 ;
-(BOOL)containsContentType:(id)arg0 withKey:(id)arg1 ;
-(BOOL)isLastEntryContentType:(id)arg0 ;
-(id)addContentTypeForKey:(id)arg0 contentType:(id)arg1 path:(id)arg2 ;
-(id)init;
-(id)pathForContentType:(id)arg0 ;
-(id)pathForKey:(id)arg0 ;
-(id)pathForMainDocument;
-(id)uniquePathForPath:(id)arg0 ;
-(void)addContentTypeForContentType:(id)arg0 extension:(id)arg1 ;
-(void)populateCommonExtensions;
-(void)writeContentTypesToStream:(id)arg0 ;


@end


#endif