// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSTRUCTUREDEVENTCLASSIFICATION_H
#define SGSTRUCTUREDEVENTCLASSIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGStructuredEventClassification : NSObject

@property (readonly, nonatomic) unsigned char category; // ivar: _category
@property (readonly, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *providerName; // ivar: _providerName
@property (readonly, nonatomic) unsigned char useCase; // ivar: _useCase


+(id)categoryForSchema:(id)arg0 ;
+(id)describeCategory:(unsigned char)arg0 ;
+(id)describeUseCase:(unsigned char)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(unsigned char)categoryForCategoryString:(id)arg0 ;
-(unsigned char)isCancelled;
-(unsigned char)isCandidateForExtraction;
-(unsigned char)useCaseForUseCaseString:(id)arg0 ;


@end


#endif