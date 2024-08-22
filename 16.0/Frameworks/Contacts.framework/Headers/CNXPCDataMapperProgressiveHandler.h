// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNXPCDATAMAPPERPROGRESSIVEHANDLER_H
#define CNXPCDATAMAPPERPROGRESSIVEHANDLER_H

@protocol ProgressiveResultsHandlerProtocol;

#import <Foundation/Foundation.h>


@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol>

 {
    id *_progressBlock;
    id *_completionBlock;
}




// -(id)initWithProgressBlock:(id)arg0 completionBlock:(unk)arg1  ;
-(void)completedWithError:(id)arg0 ;
-(void)receiveProgressiveContacts:(id)arg0 matchInfos:(id)arg1 ;


@end


#endif