// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMFETCHRESULTTOKEN_H
#define REMFETCHRESULTTOKEN_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMFetchResultToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *persistentHistoryTokens; // ivar: _persistentHistoryTokens


+(BOOL)supportsSecureCoding;
+(id)fetchResultTokenFromDataRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentHistoryTokens:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif