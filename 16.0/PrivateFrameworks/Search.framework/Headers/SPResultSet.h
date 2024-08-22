// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRESULTSET_H
#define SPRESULTSET_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPResultSet : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *resultSections; // ivar: _resultSections
@property (readonly, nonatomic) NSArray *stableSections; // ivar: _stableSections


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSections:(id)arg0 ;
-(id)initWithSections:(id)arg0 stableSections:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif