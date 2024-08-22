// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOAUTOCOMPLETESESSIONDATA_H
#define GEOAUTOCOMPLETESESSIONDATA_H


#import <Foundation/Foundation.h>

#import "GEOPDAutocompleteSessionData.h"

@interface GEOAutocompleteSessionData : NSObject {
    CGFloat _analyticsShortSessionCreateTime;
}


@property (readonly, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData; // ivar: _autocompleteSessionData


-(id)init;
-(id)initWithAutoCompleteSessionData:(id)arg0 ;
-(id)updateWithAutoCompleteSessionData:(id)arg0 ;


@end


#endif