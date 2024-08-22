// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYTSVSCANNER_H
#define HDONTOLOGYTSVSCANNER_H

@class NSScanner;

#import <Foundation/Foundation.h>


@interface HDOntologyTSVScanner : NSObject {
    NSScanner *_scanner;
}


@property (readonly, getter=isAtEnd) BOOL atEnd;


-(BOOL)scanLongLong:(*NSInteger)arg0 ;
-(BOOL)scanString:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithString:(id)arg0 ;


@end


#endif