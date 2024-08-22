// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef READINGLISTMETADATAPROVIDER_H
#define READINGLISTMETADATAPROVIDER_H

@class LPMetadataProvider, NSString;
@protocol ReadingListMetadataProvider;

#import <Foundation/Foundation.h>


@interface ReadingListMetadataProvider : NSObject <ReadingListMetadataProvider>

 {
    LPMetadataProvider *_lpMetadataProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)fetchMetadataForBookmark:(id)arg0 completion:(id)arg1 ;


@end


#endif