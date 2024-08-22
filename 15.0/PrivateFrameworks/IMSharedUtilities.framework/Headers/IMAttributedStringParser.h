// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMATTRIBUTEDSTRINGPARSER_H
#define IMATTRIBUTEDSTRINGPARSER_H


#import <Foundation/Foundation.h>

#import "IMAttributedStringParserContext.h"

@interface IMAttributedStringParser : NSObject {
    IMAttributedStringParserContext *_context;
}




+(id)sharedInstance;
-(void)_preprocessWithContext:(id)arg0 string:(*id)arg1 ;
-(void)parseContext:(id)arg0 ;


@end


#endif