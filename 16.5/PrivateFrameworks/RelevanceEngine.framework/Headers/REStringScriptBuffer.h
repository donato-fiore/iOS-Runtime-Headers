// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESTRINGSCRIPTBUFFER_H
#define RESTRINGSCRIPTBUFFER_H

@class NSString;
@protocol REScriptBuffer;

#import <Foundation/Foundation.h>


@interface REStringScriptBuffer : NSObject <REScriptBuffer>

 {
    NSString *_string;
    NSUInteger _index;
}


@property (readonly, nonatomic) unsigned short current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contentForLine:(NSUInteger)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)next;


@end


#endif