// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFFILECACHEURLFAULTHANDLER_H
#define SBFFILECACHEURLFAULTHANDLER_H

@class NSString, NSArray, NSURLSession;
@protocol SBFFileCacheFaultHandler;

#import <Foundation/Foundation.h>


@interface SBFFileCacheURLFaultHandler : NSObject <SBFFileCacheFaultHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSArray *retryIntervals; // ivar: _retryIntervals
@property (readonly) Class superclass;
@property (retain) NSURLSession *urlSession; // ivar: _urlSession


-(id)init;
-(void)attemptLoadFromURL:(id)arg0 session:(id)arg1 retryIntervalEnumerator:(id)arg2 completionHandler:(id)arg3 ;
-(void)fileCache:(id)arg0 loadFileForIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)performLoadFromURL:(id)arg0 session:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif