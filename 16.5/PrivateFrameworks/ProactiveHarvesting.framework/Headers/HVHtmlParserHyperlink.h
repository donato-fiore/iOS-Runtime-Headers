// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVHTMLPARSERHYPERLINK_H
#define HVHTMLPARSERHYPERLINK_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface HVHtmlParserHyperlink : NSObject

@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHtmlParserHyperlink:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif