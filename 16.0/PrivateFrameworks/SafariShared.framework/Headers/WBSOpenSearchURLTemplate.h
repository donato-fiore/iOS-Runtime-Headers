// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSOPENSEARCHURLTEMPLATE_H
#define WBSOPENSEARCHURLTEMPLATE_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
}


@property (readonly, copy, nonatomic) NSString *templateString; // ivar: _templateString


+(BOOL)supportsSecureCoding;
-(BOOL)includesParameter:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URLWithSearchTerms:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)templateByAddingParameter:(id)arg0 asURLQueryParameter:(id)arg1 ;
-(id)templateBySubstitutingValue:(id)arg0 forParameter:(id)arg1 ;
-(id)templateBySubstitutingValues:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif