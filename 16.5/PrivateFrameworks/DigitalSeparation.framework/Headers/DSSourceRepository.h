// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSOURCEREPOSITORY_H
#define DSSOURCEREPOSITORY_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface DSSourceRepository : NSObject

@property (readonly, copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSDictionary *sourcesByName; // ivar: _sourcesByName


+(id)repositoryWithURL:(id)arg0 ;
+(void)initialize;
-(id)init;
-(id)initWithSources:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif