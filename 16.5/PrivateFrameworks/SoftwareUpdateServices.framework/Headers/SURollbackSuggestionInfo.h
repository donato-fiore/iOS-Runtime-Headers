// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUROLLBACKSUGGESTIONINFO_H
#define SUROLLBACKSUGGESTIONINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SURollbackSuggestionInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSArray *responsibleProcessesInfo; // ivar: _responsibleProcessesInfo
@property (nonatomic) NSUInteger suggestionReason; // ivar: _suggestionReason


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif