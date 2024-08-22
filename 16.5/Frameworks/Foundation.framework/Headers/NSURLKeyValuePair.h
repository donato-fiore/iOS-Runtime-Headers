// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLKEYVALUEPAIR_H
#define NSURLKEYVALUEPAIR_H


#import <Foundation/Foundation.h>


@interface NSURLKeyValuePair : NSObject {
    id *key;
    id *value;
    NSUInteger hash;
}




+(id)pair;
+(id)pairWithKey:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;
-(id)key;
-(id)value;
-(void)dealloc;
-(void)setKey:(id)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif