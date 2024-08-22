// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMASSISTANTMESSAGEATTRIBUTEOPTIONS_H
#define IMASSISTANTMESSAGEATTRIBUTEOPTIONS_H


#import <Foundation/Foundation.h>


@interface IMAssistantMessageAttributeOptions : NSObject

@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) BOOL includeRead;
@property (readonly, nonatomic) BOOL includeUnread;


+(id)optionsWithAttributes:(NSUInteger)arg0 ;
+(id)optionsWithAttributes:(NSUInteger)arg0 sanitizer:(id)arg1 ;
-(id)initWithAttributes:(NSUInteger)arg0 ;
-(id)initWithAttributes:(NSUInteger)arg0 sanitizer:(id)arg1 ;


@end


#endif