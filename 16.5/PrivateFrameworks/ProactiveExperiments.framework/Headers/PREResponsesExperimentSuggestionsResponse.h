// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRERESPONSESEXPERIMENTSUGGESTIONSRESPONSE_H
#define PRERESPONSESEXPERIMENTSUGGESTIONSRESPONSE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PREResponsesExperimentSuggestionsResponse : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif