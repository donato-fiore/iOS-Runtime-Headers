// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLINKPRESENTATIONPREVIEWGENERATORCLIENT_H
#define ICLINKPRESENTATIONPREVIEWGENERATORCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ICLinkPresentationPreviewGeneratorClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToService; // ivar: _connectionToService


+(id)sharedInstance;
-(id)init;
-(struct CGSize )drawPreviewStartingAtPoint:(struct CGPoint )arg0 attachment:(id)arg1 insideSystemPaper:(BOOL)arg2 ;


@end


#endif