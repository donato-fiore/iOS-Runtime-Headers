// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCONTENTREQUESTOPTIONS_H
#define EMCONTENTREQUESTOPTIONS_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying, EMContentRequestOptionsBuilder;

#import <Foundation/Foundation.h>


@interface EMContentRequestOptions : NSObject <NSSecureCoding, NSCopying, EMContentRequestOptionsBuilder>



@property (nonatomic) NSInteger includeSuggestionItems; // ivar: _includeSuggestionItems
@property (nonatomic) NSInteger networkUsage; // ivar: _networkUsage
@property (nonatomic) BOOL requestAllHeaders; // ivar: _requestAllHeaders
@property (copy, nonatomic) NSArray *requestedHeaderKeys; // ivar: _requestedHeaderKeys
@property (copy, nonatomic) NSString *requestedRepresentation; // ivar: _requestedRepresentation


+(BOOL)supportsSecureCoding;
+(id)optionsWithRequestedRepresentationType:(id)arg0 networkUsage:(NSInteger)arg1 ;
+(id)optionsWithRequestedRepresentationType:(id)arg0 networkUsage:(NSInteger)arg1 includeSuggestionItems:(BOOL)arg2 ;
+(id)optionsWithRequestedRepresentationType:(id)arg0 networkUsage:(NSInteger)arg1 includeSuggestions:(NSInteger)arg2 ;
-(id)copyWithBuilder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif