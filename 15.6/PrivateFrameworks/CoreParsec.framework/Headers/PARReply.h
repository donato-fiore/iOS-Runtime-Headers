// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARREPLY_H
#define PARREPLY_H

@class NSArray, NSData, NSURLRequest, NSURLResponse;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PARTask.h"

@interface PARReply : NSObject <NSSecureCoding>

 {
    NSArray *_rawResponse;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSURLRequest *httpRequest; // ivar: _httpRequest
@property (retain, nonatomic) NSURLResponse *httpResponse; // ivar: _httpResponse
@property (retain, nonatomic) NSArray *previouslyEngagedSuggestions; // ivar: _previouslyEngagedSuggestions
@property (retain, nonatomic) NSArray *rawResponse;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (weak, nonatomic) PARTask *task; // ivar: _task


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif