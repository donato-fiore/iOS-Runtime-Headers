// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMREGULATORYLOGGER_H
#define REMREGULATORYLOGGER_H


#import <Foundation/Foundation.h>


@interface REMRegulatoryLogger : NSObject

@property (nonatomic) *ct_green_tea_logger_s greenTeaLogger; // ivar: _greenTeaLogger


+(NSInteger)attachmentTypeFromUTType:(id)arg0 ;
+(id)sharedLogger;
+(void)attachmentAddedForType:(NSInteger)arg0 ;
+(void)attachmentAddedForUTType:(id)arg0 ;
+(void)attachmentPushedToiCloudForType:(NSInteger)arg0 ;
+(void)attachmentPushedToiCloudForUTType:(id)arg0 ;
-(id)init;


@end


#endif