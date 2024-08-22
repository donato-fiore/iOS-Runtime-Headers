// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEVALIDATOR_H
#define DEVALIDATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEValidator : NSObject

@property (retain, nonatomic) NSString *templateDir; // ivar: _templateDir


-(id)jsonToResult:(id)arg0 ;
-(id)validate:(id)arg0 locale:(id)arg1 ;
-(id)validateFile:(id)arg0 locale:(id)arg1 ;
-(id)validateString:(id)arg0 localeString:(id)arg1 ;
-(id)validateWithParams:(id)arg0 locale:(id)arg1 ;


@end


#endif