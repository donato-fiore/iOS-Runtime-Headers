// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPERSONALIZATIONDECOMPOSEDURL_H
#define FCPERSONALIZATIONDECOMPOSEDURL_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FCPersonalizationDecomposedURL : NSObject

@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSArray *paths; // ivar: _paths


-(id)initWithURL:(id)arg0 ;
-(id)initWithURLString:(id)arg0 ;


@end


#endif