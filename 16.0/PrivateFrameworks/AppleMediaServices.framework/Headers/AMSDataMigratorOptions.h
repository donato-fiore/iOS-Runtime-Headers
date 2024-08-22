// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDATAMIGRATOROPTIONS_H
#define AMSDATAMIGRATOROPTIONS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AMSDataMigratorOptions : NSObject

@property (copy, nonatomic) NSString *currentBuildVersion; // ivar: _currentBuildVersion
@property (readonly, nonatomic) NSArray *optionsArray;
@property (copy, nonatomic) NSString *previousBuildVersion; // ivar: _previousBuildVersion
@property (nonatomic) NSUInteger scenario; // ivar: _scenario


+(id)_stringFromOptionsArray:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithOptionsArray:(id)arg0 ;


@end


#endif