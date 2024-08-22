// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCOMPOSEATTACHMENTANALYTICCONTROLLER_H
#define MSCOMPOSEATTACHMENTANALYTICCONTROLLER_H


#import <Foundation/Foundation.h>

#import "MSDiagnosticManager.h"

@interface MSComposeAttachmentAnalyticController : NSObject {
    NSInteger _totalDrawingsInsertedCount;
}


@property (retain, nonatomic) MSDiagnosticManager *diagnosticManager; // ivar: _diagnosticManager


-(id)initWithDiagnosticManager:(id)arg0 totalDrawingsInsertedCount:(NSInteger)arg1 ;
-(void)_submitFinalDrawingInsertCount:(NSInteger)arg0 sentMessage:(BOOL)arg1 ;
-(void)abandonMessageWithActualDrawingInsertCount:(NSInteger)arg0 ;
-(void)sendMessageWithActualDrawingInsertCount:(NSInteger)arg0 ;


@end


#endif