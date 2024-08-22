// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVOCTETSTREAMPARSER_H
#define COREDAVOCTETSTREAMPARSER_H

@class NSError, NSString, NSMutableData;
@protocol CoreDAVResponseBodyParser;

#import <Foundation/Foundation.h>


@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser>

 {
    NSError *_parserError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableData *octetStreamData; // ivar: _octetStreamData
@property (readonly) NSError *parserError;
@property (readonly) Class superclass;


+(BOOL)canHandleContentType:(id)arg0 ;
-(BOOL)processData:(id)arg0 forTask:(id)arg1 ;
-(id)init;


@end


#endif