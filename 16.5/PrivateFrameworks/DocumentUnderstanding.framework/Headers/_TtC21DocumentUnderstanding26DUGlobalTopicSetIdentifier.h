// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING26DUGLOBALTOPICSETIDENTIFIER_H
#define _TTC21DOCUMENTUNDERSTANDING26DUGLOBALTOPICSETIDENTIFIER_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier : NSObject <NSCoding, NSCopying>



@property (nonatomic) NSInteger topicSetName; // ivar: topicSetName
@property (nonatomic) NSInteger topicSetVersion; // ivar: topicSetVersion


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif