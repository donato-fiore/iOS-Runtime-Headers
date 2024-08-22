// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBTEXTWRITER_H
#define PBTEXTWRITER_H

@class NSMutableString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PBTextWriter : NSObject {
    BOOL _newlinesPrinted;
    NSInteger _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}




-(BOOL)write:(id)arg0 ;
-(id)init;
-(id)string;
-(void)dealloc;
-(void)reset;


@end


#endif