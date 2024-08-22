// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESULTTYPESEARCHFILTER_H
#define GEORESULTTYPESEARCHFILTER_H

@protocol GEOSearchFilter;

#import <Foundation/Foundation.h>


@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter>



@property (readonly, nonatomic) NSUInteger types; // ivar: _types


-(BOOL)applyToSearchParameters:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithResultTypes:(NSUInteger)arg0 ;


@end


#endif