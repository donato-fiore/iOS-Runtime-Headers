// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSQUERYSUGGESTION_H
#define WBSQUERYSUGGESTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSQuerySuggestion : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) id *tag; // ivar: _tag
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)init;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 type:(NSInteger)arg2 tag:(id)arg3 ;


@end


#endif