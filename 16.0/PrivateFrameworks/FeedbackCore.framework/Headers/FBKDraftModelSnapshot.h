// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDRAFTMODELSNAPSHOT_H
#define FBKDRAFTMODELSNAPSHOT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FBKDraftModelSnapshot : NSObject

@property (nonatomic, readonly) NSArray *allAttachments;
@property (nonatomic, readonly) NSArray *allQuestions;
@property (retain, nonatomic) NSDictionary *deviceIdToAttachments; // ivar: _deviceIdToAttachments
@property (retain, nonatomic) NSArray *devices; // ivar: _devices
@property (nonatomic, readonly) BOOL hasAnyDevices;
@property (retain, nonatomic) NSDictionary *questionGroupIdToQuestions; // ivar: _questionGroupIdToQuestions
@property (retain, nonatomic) NSArray *questionGroups; // ivar: _questionGroups
@property (nonatomic, readonly) NSArray *sections;


-(id)initWithQuestionGroups:(id)arg0 questions:(id)arg1 deviceDiagnostics:(id)arg2 ;
-(id)rowsForSection:(id)arg0 ;


@end


#endif