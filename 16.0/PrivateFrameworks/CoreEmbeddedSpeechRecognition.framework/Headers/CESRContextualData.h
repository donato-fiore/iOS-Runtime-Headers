// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRCONTEXTUALDATA_H
#define CESRCONTEXTUALDATA_H

@class NSString, _EARContextualData;

#import <Foundation/Foundation.h>


@interface CESRContextualData : NSObject

@property (readonly, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) _EARContextualData *contextualData; // ivar: _contextualData
@property (readonly, nonatomic) NSString *taskName; // ivar: _taskName


-(BOOL)containsEntity;
-(id)initWithConfiguration:(id)arg0 taskName:(id)arg1 applicationName:(id)arg2 ;
-(id)metrics;
-(void)fetchNamedEntitiesWithTimeInterval:(CGFloat)arg0 ;


@end


#endif