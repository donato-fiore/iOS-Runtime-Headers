// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDOCUMENTRESOURCETAGANALYZER_H
#define TSPDOCUMENTRESOURCETAGANALYZER_H

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceTagAnalyzer : NSObject <NSFastEnumeration>

 {
    NSMutableDictionary *_tagsToDocumentResourceInfosDictionary;
    NSMutableSet *_documentResourceInfos;
    NSMutableSet *_untaggedDocumentResourceInfos;
}


@property (readonly, copy, nonatomic) NSSet *allDocumentResourceInfos;
@property (readonly, copy, nonatomic) NSSet *allTags;
@property (readonly, copy, nonatomic) NSSet *untaggedDocumentResourceInfos;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)description;
-(id)minimumTagsWithPreferredTags:(id)arg0 ;
-(void)addDocumentResourceInfo:(id)arg0 ;


@end


#endif