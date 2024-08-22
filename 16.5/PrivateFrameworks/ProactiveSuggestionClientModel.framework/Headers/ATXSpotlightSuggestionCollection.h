// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSPOTLIGHTSUGGESTIONCOLLECTION_H
#define ATXSPOTLIGHTSUGGESTIONCOLLECTION_H

@class NSString, NSArray;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXSpotlightSuggestionCollection : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSString *contextTitle; // ivar: _contextTitle
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSpotlightSuggestionCollection:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSuggestions:(id)arg0 contextTitle:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif