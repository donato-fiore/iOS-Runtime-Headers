// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKBOOKMARK_H
#define MKBOOKMARK_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MKBookmark : NSObject

@property (copy, nonatomic) NSString *ID; // ivar: _ID
@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *url; // ivar: _url


-(id)initWithData:(id)arg0 ;


@end


#endif