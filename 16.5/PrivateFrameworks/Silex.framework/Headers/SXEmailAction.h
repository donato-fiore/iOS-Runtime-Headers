// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXEMAILACTION_H
#define SXEMAILACTION_H

@class NSString;
@protocol SXAction;

#import <Foundation/Foundation.h>

#import "SXJSONDictionary.h"

@interface SXEmailAction : NSObject <SXAction>



@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: analytics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *recipient; // ivar: _recipient
@property (readonly, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)initWithRecipient:(id)arg0 subject:(id)arg1 ;


@end


#endif