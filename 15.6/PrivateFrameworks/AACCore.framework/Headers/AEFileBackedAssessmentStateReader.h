// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEFILEBACKEDASSESSMENTSTATEREADER_H
#define AEFILEBACKEDASSESSMENTSTATEREADER_H

@class NSURL;
@protocol AEAssessmentStateReading, AESystemNotificationPrimitives, AEFileSystemPrimitives, OS_dispatch_queue, AEObservation;

#import <Foundation/Foundation.h>


@interface AEFileBackedAssessmentStateReader : NSObject <AEAssessmentStateReading>

 {
    NSURL *_assessmentFileURL;
    id<AESystemNotificationPrimitives> *_systemNotificationPrimitives;
    id<AEFileSystemPrimitives> *_fileSystemPrimitives;
    NSObject<OS_dispatch_queue> *_queue;
    id<AEObservation> *_stateChangeNotificationObservation;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active


-(id)initWithSystemNotificationPrimitives:(id)arg0 fileSystemPrimitives:(id)arg1 assessmentFileURL:(id)arg2 queue:(id)arg3 ;
-(void)dealloc;


@end


#endif