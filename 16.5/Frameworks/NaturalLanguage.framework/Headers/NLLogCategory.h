// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLLOGCATEGORY_H
#define NLLOGCATEGORY_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface NLLogCategory : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *internal; // ivar: _internal
@property (readonly, nonatomic) NSString *loggingCategory; // ivar: _loggingCategory
@property (readonly, nonatomic) NSString *loggingSubsystem; // ivar: _loggingSubsystem


+(id)_getCategory:(id)arg0 ;
+(id)categoryWithName:(id)arg0 ;
+(id)categoryWithName:(id)arg0 inSubsystem:(id)arg1 ;
+(id)defaultCategory;
+(void)_addCategory:(id)arg0 inSubsystem:(id)arg1 ;
+(void)initialize;
-(id)initCategory:(id)arg0 inSubsystem:(id)arg1 ;


@end


#endif