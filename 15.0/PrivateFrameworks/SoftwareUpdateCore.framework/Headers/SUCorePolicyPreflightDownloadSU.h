// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREPOLICYPREFLIGHTDOWNLOADSU_H
#define SUCOREPOLICYPREFLIGHTDOWNLOADSU_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCorePolicyPreflightDownloadSU : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *additionalOptions; // ivar: _additionalOptions
@property (nonatomic) BOOL allowsCellular; // ivar: _allowsCellular
@property (retain, nonatomic) NSDictionary *basePreflightOptions; // ivar: _basePreflightOptions
@property (nonatomic) BOOL discretionary; // ivar: _discretionary
@property (nonatomic) BOOL skipPhase; // ivar: _skipPhase
@property NSInteger specifiedFields; // ivar: _specifiedFields


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSkipPhaseSet:(BOOL)arg0 ;
-(id)summary;
-(void)backToDefaultsWithSkipPhaseSet:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif