// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSPOTLIGHTSEARCHRESULT_H
#define CKSPOTLIGHTSEARCHRESULT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface CKSpotlightSearchResult : NSObject

@property (copy, nonatomic) NSString *chatGUID; // ivar: _chatGUID
@property (retain, nonatomic) NSDate *messageDate; // ivar: _messageDate
@property (copy, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (copy, nonatomic) NSString *summary; // ivar: _summary


-(NSInteger)compare:(id)arg0 ;
-(id)initWithMessageGUID:(id)arg0 chatGUID:(id)arg1 messageTime:(id)arg2 summery:(id)arg3 ;


@end


#endif