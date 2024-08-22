// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFQUICKLOOKDOCUMENTWRITER_H
#define _SFQUICKLOOKDOCUMENTWRITER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_SFQuickLookDocument.h"

@interface _SFQuickLookDocumentWriter : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_filePathAccessedOnDispatchQueue;
}


@property (copy, nonatomic) NSString *filePathAccessedOnDispatchQueue;
@property (readonly, nonatomic) BOOL hasFinishedWriting; // ivar: _hasFinishedWriting
@property (readonly, nonatomic) _SFQuickLookDocument *quickLookDocument; // ivar: _quickLookDocument


-(id)initWithFileName:(id)arg0 uti:(id)arg1 ;
-(void)writeDataAndClose:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif