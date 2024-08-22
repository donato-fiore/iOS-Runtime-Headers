// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLDATASOURCE_H
#define QLDATASOURCE_H

@class NSArray;
@protocol QLPreviewItemProvider;

#import <Foundation/Foundation.h>


@interface QLDataSource : NSObject <QLPreviewItemProvider>

 {
    NSArray *_previewItems;
}




-(id)initWithPreviewItems:(id)arg0 ;
-(void)previewItemAtIndex:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif