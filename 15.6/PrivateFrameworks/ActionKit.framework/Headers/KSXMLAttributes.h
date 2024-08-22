// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KSXMLATTRIBUTES_H
#define KSXMLATTRIBUTES_H

@class NSMutableArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KSXMLAttributes : NSObject <NSCopying>

 {
    NSMutableArray *_attributes;
}


@property (copy, nonatomic) NSDictionary *attributesAsDictionary;


-(BOOL)hasAttributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithXMLAttributes:(id)arg0 ;
-(void)addAttribute:(id)arg0 value:(id)arg1 ;
-(void)close;
-(void)writeAttributes:(id)arg0 ;


@end


#endif