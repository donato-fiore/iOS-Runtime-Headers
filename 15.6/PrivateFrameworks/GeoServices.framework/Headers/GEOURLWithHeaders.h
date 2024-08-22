// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOURLWITHHEADERS_H
#define GEOURLWITHHEADERS_H

@class NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface GEOURLWithHeaders : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSDictionary *headerFields; // ivar: _headerFields


-(id)init;
-(id)initWithURL:(id)arg0 headerFields:(id)arg1 ;


@end


#endif