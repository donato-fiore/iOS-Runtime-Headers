// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSYNCEDDEFAULTSVERSIONINFO_H
#define HDSPSYNCEDDEFAULTSVERSIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSPSyncedDefaultsVersionInfo : NSObject

@property (readonly, nonatomic) NSUInteger currentDataVersion; // ivar: _currentDataVersion
@property (readonly, copy, nonatomic) NSString *dataVersionKey; // ivar: _dataVersionKey


-(id)initWithDataVersionKey:(id)arg0 currentDataVersion:(NSUInteger)arg1 ;


@end


#endif