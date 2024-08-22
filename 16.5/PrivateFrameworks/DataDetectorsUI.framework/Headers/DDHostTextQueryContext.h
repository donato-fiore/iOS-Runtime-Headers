// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDHOSTTEXTQUERYCONTEXT_H
#define DDHOSTTEXTQUERYCONTEXT_H

@class NSString;
@protocol RVTextQueryProtocol;

#import <Foundation/Foundation.h>


@interface DDHostTextQueryContext : NSObject <RVTextQueryProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger queryID; // ivar: _queryID
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent




@end


#endif