// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21DOCUMENTUNDERSTANDING34DUUSERINTERFACEUNDERSTANDINGRESULT_H
#define _TTC21DOCUMENTUNDERSTANDING34DUUSERINTERFACEUNDERSTANDINGRESULT_H

@class NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding34DUUserInterfaceUnderstandingResult : NSObject <NSCoding, NSCopying>

 {
    ? topicIdentifier;
}


@property (nonatomic) CGFloat topicConfidence; // ivar: topicConfidence
@property (nonatomic, copy) NSString *topicIdentifier;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif