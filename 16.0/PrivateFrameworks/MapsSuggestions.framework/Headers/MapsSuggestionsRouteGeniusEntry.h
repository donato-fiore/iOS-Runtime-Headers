// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSROUTEGENIUSENTRY_H
#define MAPSSUGGESTIONSROUTEGENIUSENTRY_H

@class GEOComposedRoute;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsEntry.h"

@interface MapsSuggestionsRouteGeniusEntry : NSObject <NSSecureCoding>



@property (retain, nonatomic) MapsSuggestionsEntry *entry; // ivar: _entry
@property (retain, nonatomic) GEOComposedRoute *route; // ivar: _route


+(BOOL)supportsSecureCoding;
+(id)entryWithData:(id)arg0 ;
-(CGFloat)etaInSeconds;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntry:(id)arg0 route:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif