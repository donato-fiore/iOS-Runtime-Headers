// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFQUICKLOOKDOCUMENTWRITER_H
#define SFQUICKLOOKDOCUMENTWRITER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFQuickLookDocument.h"

@interface SFQuickLookDocumentWriter : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_filePathAccessedOnDispatchQueue;
}


@property (copy, nonatomic) NSString *filePathAccessedOnDispatchQueue;
@property (readonly, nonatomic) BOOL hasFinishedWriting; // ivar: _hasFinishedWriting
@property (readonly, nonatomic) SFQuickLookDocument *quickLookDocument; // ivar: _quickLookDocument


-(id)initWithFileName:(id)arg0 uti:(id)arg1 ;
-(void)writeDataAndClose:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif