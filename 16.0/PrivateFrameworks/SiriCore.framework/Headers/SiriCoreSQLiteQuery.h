// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESQLITEQUERY_H
#define SIRICORESQLITEQUERY_H

@class NSArray, NSString;
@protocol SiriCoreSQLiteRecordBuilder;

#import <Foundation/Foundation.h>

#import "SiriCoreSQLiteStatement.h"

@interface SiriCoreSQLiteQuery : NSObject

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSObject<SiriCoreSQLiteRecordBuilder> *recordBuilder; // ivar: _recordBuilder
@property (readonly, nonatomic) SiriCoreSQLiteStatement *statement; // ivar: _statement
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


-(id)description;
-(id)initWithString:(id)arg0 statement:(id)arg1 parameters:(id)arg2 recordBuilder:(id)arg3 options:(NSUInteger)arg4 ;


@end


#endif