// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21SIRIREQUESTDISPATCHER11MESSAGEBASE_H
#define _TTC21SIRIREQUESTDISPATCHER11MESSAGEBASE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC21SiriRequestDispatcher11MessageBase : NSObject {
    ? messageId;
    ? postedOnTheBus;
    ? source;
    ? assistantId;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;


-(id)init;


@end


#endif