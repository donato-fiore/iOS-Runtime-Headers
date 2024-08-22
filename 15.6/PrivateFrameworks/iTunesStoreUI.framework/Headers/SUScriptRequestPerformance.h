// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTREQUESTPERFORMANCE_H
#define SUSCRIPTREQUESTPERFORMANCE_H

@class ISURLRequestPerformance, NSString;


#import "SUScriptObject.h"

@interface SUScriptRequestPerformance : SUScriptObject {
    ISURLRequestPerformance *_performance;
}


@property (readonly) NSString *JSONHeaders;
@property (readonly) CGFloat finishInterval;
@property (readonly) CGFloat receivedResponseInterval;
@property (readonly) CGFloat renderBeginInterval;
@property (readonly) CGFloat renderEndInterval;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithRequestPerformance:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif