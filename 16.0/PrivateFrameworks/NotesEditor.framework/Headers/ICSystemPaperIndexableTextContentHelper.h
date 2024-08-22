// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSYSTEMPAPERINDEXABLETEXTCONTENTHELPER_H
#define ICSYSTEMPAPERINDEXABLETEXTCONTENTHELPER_H

@class PKDrawing;

#import <Foundation/Foundation.h>


@interface ICSystemPaperIndexableTextContentHelper : NSObject {
    ? paperDocument;
    ? drawing;
}


@property (nonatomic, copy) PKDrawing *drawing;


-(id)init;
-(id)initWithPaperAttachment:(id)arg0 ;
-(id)searchWithQuery:(id)arg0 ;


@end


#endif