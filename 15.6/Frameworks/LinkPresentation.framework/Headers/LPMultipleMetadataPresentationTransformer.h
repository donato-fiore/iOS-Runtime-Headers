// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPMULTIPLEMETADATAPRESENTATIONTRANSFORMER_H
#define LPMULTIPLEMETADATAPRESENTATIONTRANSFORMER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface LPMultipleMetadataPresentationTransformer : NSObject {
    NSArray *_metadata;
    NSDictionary *_summaryCounts;
    BOOL _hasOnlyFiles;
}


@property (nonatomic) NSUInteger preferredSizeClass; // ivar: _preferredSizeClass


-(id)_summaryCounts;
-(id)_summarySubtitle;
-(id)initWithMetadata:(id)arg0 ;
-(id)summary;
-(id)summaryImages;
-(id)summaryMetadata;


@end


#endif