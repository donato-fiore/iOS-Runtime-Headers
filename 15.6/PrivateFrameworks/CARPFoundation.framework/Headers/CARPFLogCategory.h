// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFLOGCATEGORY_H
#define CARPFLOGCATEGORY_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CARPFLogCategory : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *internal; // ivar: _internal
@property (readonly, nonatomic) NSString *loggingCategory; // ivar: _loggingCategory
@property (readonly, nonatomic) NSString *loggingSubsystem; // ivar: _loggingSubsystem


+(id)categoryWithName:(id)arg0 ;
+(id)categoryWithName:(id)arg0 inSubsystem:(id)arg1 ;
+(id)defaultCategory;
+(void)initialize;
-(id)initCategory:(id)arg0 inSubsystem:(id)arg1 ;


@end


#endif