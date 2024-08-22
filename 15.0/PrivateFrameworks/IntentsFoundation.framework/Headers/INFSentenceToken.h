// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INFSENTENCETOKEN_H
#define INFSENTENCETOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface INFSentenceToken : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)dictionaryRepresentation;
-(id)stringForContext:(id)arg0 ;


@end


#endif