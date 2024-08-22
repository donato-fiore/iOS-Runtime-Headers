// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMCONFIG_H
#define CDMCONFIG_H

@class NSOrderedSet, NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CDMConfig : NSObject <NSCopying>



@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs; // ivar: _availableServiceGraphs
@property (readonly, nonatomic) NSString *defaultLanguage;
@property (readonly, nonatomic) NSSet *enabledServices; // ivar: _enabledServices
@property (readonly, nonatomic) BOOL isCliMode; // ivar: _isCliMode
@property (readonly, nonatomic) BOOL isFrameworkMode; // ivar: _isFrameworkMode
@property (readonly, nonatomic) unsigned int maxConcurrentCount; // ivar: _maxConcurrentCount


+(id)defaultCLIServiceGraph;
+(id)defaultEnabledServiceGraph;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForUseByCLI;
-(id)initForUseByCLI:(BOOL)arg0 frameworkMode:(BOOL)arg1 ;
-(id)initForUseByCLI:(BOOL)arg0 frameworkMode:(BOOL)arg1 maxConcurrentCount:(unsigned int)arg2 ;
-(id)initForUseByFramework;


@end


#endif