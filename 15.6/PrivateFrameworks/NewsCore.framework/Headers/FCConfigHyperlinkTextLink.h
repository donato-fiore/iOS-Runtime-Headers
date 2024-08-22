// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCONFIGHYPERLINKTEXTLINK_H
#define FCCONFIGHYPERLINKTEXTLINK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCConfigHyperlinkTextLink : NSObject

@property (readonly, nonatomic) NSInteger rangeLength; // ivar: _rangeLength
@property (readonly, nonatomic) NSInteger rangeStart; // ivar: _rangeStart
@property (readonly, copy, nonatomic) NSString *url; // ivar: _url


-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithURL:(id)arg0 rangeStart:(NSInteger)arg1 rangeLength:(NSInteger)arg2 ;


@end


#endif