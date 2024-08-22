// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SDLEGALDOC_H
#define SDLEGALDOC_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SDLegalDoc : NSObject

@property (copy) NSString *content; // ivar: _content
@property NSInteger legal_id; // ivar: _legal_id
@property (copy) NSString *title; // ivar: _title


+(id)legalDocWithID:(NSInteger)arg0 title:(id)arg1 content:(id)arg2 ;
-(id)initWithID:(NSInteger)arg0 title:(id)arg1 content:(id)arg2 ;


@end


#endif