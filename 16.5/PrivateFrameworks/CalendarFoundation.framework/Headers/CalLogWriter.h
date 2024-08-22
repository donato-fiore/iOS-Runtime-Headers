// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLOGWRITER_H
#define CALLOGWRITER_H

@class NSString;
@protocol CalLogWriter, CalLogFormatter;

#import <Foundation/Foundation.h>


@interface CalLogWriter : NSObject <CalLogWriter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CalLogFormatter> *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)flush;
-(id)init;
-(id)initWithParameters:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif