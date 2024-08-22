// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKSTYLEMEDIAQUERY_H
#define IKSTYLEMEDIAQUERY_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IKStyleMediaQuery : NSObject <NSCopying>

 {
    NSString *_identifier;
}


@property (readonly, retain, nonatomic) NSDictionary *featureValues; // ivar: _featureValues
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isNegated; // ivar: _isNegated
@property (readonly, retain, nonatomic) NSString *mediaType; // ivar: _mediaType


+(id)mediaQueryListWithCSSMediaQuery:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMediaType:(id)arg0 featureValues:(id)arg1 isNegated:(BOOL)arg2 ;


@end


#endif