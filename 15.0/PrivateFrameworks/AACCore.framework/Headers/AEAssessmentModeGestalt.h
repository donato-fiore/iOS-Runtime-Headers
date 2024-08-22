// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEASSESSMENTMODEGESTALT_H
#define AEASSESSMENTMODEGESTALT_H

@class NSURL;
@protocol AEFileSystemPrimitives, AEObservation, AESystemNotificationPrimitives;

#import <Foundation/Foundation.h>


@interface AEAssessmentModeGestalt : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSURL *assessmentFileURL; // ivar: _assessmentFileURL
@property (readonly, nonatomic) NSObject<AEFileSystemPrimitives> *fileSystemPrimitives; // ivar: _fileSystemPrimitives
@property (retain, nonatomic) NSObject<AEObservation> *stateChangeNotificationObservation; // ivar: _stateChangeNotificationObservation
@property (readonly, nonatomic) NSObject<AESystemNotificationPrimitives> *systemNotificationPrimitives; // ivar: _systemNotificationPrimitives


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithSystemNotificationPrimitives:(id)arg0 fileSystemPrimitives:(id)arg1 assessmentFileURL:(id)arg2 ;
-(void)dealloc;


@end


#endif