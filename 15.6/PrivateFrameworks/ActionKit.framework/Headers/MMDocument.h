// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MMDOCUMENT_H
#define MMDOCUMENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MMDocument : NSObject

@property (copy, nonatomic) NSArray *elements; // ivar: _elements
@property (readonly, copy, nonatomic) NSString *markdown; // ivar: _markdown


+(id)documentWithMarkdown:(id)arg0 ;
-(id)initWithMarkdown:(id)arg0 ;
-(void)addElement:(id)arg0 ;


@end


#endif