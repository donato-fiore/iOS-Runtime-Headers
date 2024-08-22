// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDCONTENTFORMAT_H
#define EDCONTENTFORMAT_H

@class NSString;
@protocol EDKeyedObject, NSCopying;

#import <Foundation/Foundation.h>

#import "EDString.h"

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying>

 {
    EDString *mFormatString;
    NSUInteger mFormatId;
    BOOL mBuiltIn;
    BOOL mReferenced;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentFormatWithFormatString:(id)arg0 ;
+(id)contentFormatWithFormatString:(id)arg0 formatId:(NSUInteger)arg1 ;
+(id)contentFormatWithNSString:(id)arg0 formatId:(NSUInteger)arg1 builtIn:(BOOL)arg2 ;
-(BOOL)builtIn;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContentFormat:(id)arg0 ;
-(BOOL)referenced;
-(NSInteger)key;
-(NSUInteger)formatId;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formatString;
-(id)init;
-(void)setFormatId:(NSUInteger)arg0 ;
-(void)setReferenced:(BOOL)arg0 ;


@end


#endif