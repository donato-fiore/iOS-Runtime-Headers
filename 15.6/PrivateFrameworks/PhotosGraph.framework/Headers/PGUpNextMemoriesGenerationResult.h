// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGUPNEXTMEMORIESGENERATIONRESULT_H
#define PGUPNEXTMEMORIESGENERATIONRESULT_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PGUpNextMemoriesGenerationResult : NSObject

@property (readonly, nonatomic) NSString *debugInfo; // ivar: _debugInfo
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSArray *memoryLocalIdentifiers; // ivar: _memoryLocalIdentifiers


-(id)initWithMemoryLocalIdentifiers:(id)arg0 debugInfo:(id)arg1 ;


@end


#endif