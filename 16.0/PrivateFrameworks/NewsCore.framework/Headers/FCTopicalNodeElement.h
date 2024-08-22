// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTOPICALNODEELEMENT_H
#define FCTOPICALNODEELEMENT_H

@class NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCTopicalNodeElement : NSObject <NSCopying>

 {
    NSString *_identifier;
    NSSet *_topics;
    CGFloat _score;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif