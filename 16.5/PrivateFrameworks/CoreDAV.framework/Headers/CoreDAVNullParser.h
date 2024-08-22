// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVNULLPARSER_H
#define COREDAVNULLPARSER_H

@class NSError, NSString;
@protocol CoreDAVResponseBodyParser;

#import <Foundation/Foundation.h>


@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser>

 {
    NSError *_parserError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSError *parserError;
@property (readonly) Class superclass;


+(BOOL)canHandleContentType:(id)arg0 ;
-(BOOL)processData:(id)arg0 forTask:(id)arg1 ;


@end


#endif