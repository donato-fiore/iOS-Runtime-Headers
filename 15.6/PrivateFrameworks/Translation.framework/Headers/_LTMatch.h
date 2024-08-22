// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTMATCH_H
#define _LTMATCH_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _LTMatch : NSObject

@property (retain, nonatomic) NSDictionary *node; // ivar: _node
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *token; // ivar: _token


-(id)description;
-(id)initWithNode:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif