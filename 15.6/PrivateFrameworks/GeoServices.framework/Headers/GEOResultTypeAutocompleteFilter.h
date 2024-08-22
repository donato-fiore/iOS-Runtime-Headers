// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORESULTTYPEAUTOCOMPLETEFILTER_H
#define GEORESULTTYPEAUTOCOMPLETEFILTER_H

@protocol GEOAutocompleteFilter;

#import <Foundation/Foundation.h>


@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter>



@property (readonly, nonatomic) NSUInteger types; // ivar: _types


-(BOOL)applyToAutocompleteParameters:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithResultTypes:(NSUInteger)arg0 ;


@end


#endif