// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTAGGEDEVENT_H
#define HMMTAGGEDEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HMMTaggedEvent : NSObject

@property (readonly, nonatomic) NSDictionary *tagData; // ivar: _tagData
@property (readonly, nonatomic) NSString *tagName; // ivar: _tagName
@property (readonly, nonatomic) NSUInteger tagTime; // ivar: _tagTime


-(id)description;
-(id)initWithTag:(id)arg0 data:(id)arg1 ;
-(id)initWithTag:(id)arg0 time:(NSUInteger)arg1 data:(id)arg2 ;


@end


#endif