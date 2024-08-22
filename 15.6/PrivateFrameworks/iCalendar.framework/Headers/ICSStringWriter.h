// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSSTRINGWRITER_H
#define ICSSTRINGWRITER_H

@class NSMutableString, NSString;
@protocol ICSAppendable;

#import <Foundation/Foundation.h>


@interface ICSStringWriter : NSObject <ICSAppendable>

 {
    NSMutableString *_result;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)mutableResult;
-(id)result;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;


@end


#endif