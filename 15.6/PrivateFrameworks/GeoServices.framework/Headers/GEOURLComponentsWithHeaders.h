// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOURLCOMPONENTSWITHHEADERS_H
#define GEOURLCOMPONENTSWITHHEADERS_H

@class NSURL, NSURLComponents, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "GEOURLWithHeaders.h"

@interface GEOURLComponentsWithHeaders : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURLComponents *URLComponents; // ivar: _URLComponents
@property (readonly, nonatomic) GEOURLWithHeaders *URLWithHeaders;
@property (readonly, nonatomic) NSMutableDictionary *headerFields; // ivar: _headerFields


-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURLComponents:(id)arg0 ;
-(void)updateQueryItemsWithBlock:(id)arg0 ;


@end


#endif