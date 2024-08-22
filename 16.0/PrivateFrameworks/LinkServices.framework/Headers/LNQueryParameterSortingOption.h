// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNQUERYPARAMETERSORTINGOPTION_H
#define LNQUERYPARAMETERSORTINGOPTION_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNQueryParameterSortingOption : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger order; // ivar: _order
@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, copy, nonatomic) NSNumber *sortParameterIndex; // ivar: _sortParameterIndex


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrder:(NSInteger)arg0 parameterIdentifier:(id)arg1 ;
-(id)initWithOrder:(NSInteger)arg0 sortParameterIndex:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif