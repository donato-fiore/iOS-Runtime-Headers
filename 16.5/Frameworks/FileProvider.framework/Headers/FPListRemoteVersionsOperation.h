// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPLISTREMOTEVERSIONSOPERATION_H
#define FPLISTREMOTEVERSIONSOPERATION_H

@class NSURL, NSOperationQueue;


#import "FPOperation.h"

@interface FPListRemoteVersionsOperation : FPOperation {
    NSURL *_documentURL;
    NSOperationQueue *_queue;
}


@property (nonatomic) BOOL includeCachedVersions; // ivar: _includeCachedVersions


-(BOOL)isSandboxExtensionConsumed;
-(id)fp_prettyDescription;
-(id)initWithDocumentURL:(id)arg0 ;
-(void)main;
-(void)presendNotifications;


@end


#endif