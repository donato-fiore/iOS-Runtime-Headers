// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATAATTRIBUTES_H
#define TSPDATAATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSPDataAttributes : NSObject <NSCopying>





+(id)_classRegistry;
+(id)newDataAttributesWithMessage:(*void)arg0 ;
+(void)registerDataAttributesClass:(Class)arg0 forExtensionNumber:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMessage:(*void)arg0 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif