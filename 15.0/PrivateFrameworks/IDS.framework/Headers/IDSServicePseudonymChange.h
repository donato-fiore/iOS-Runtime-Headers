// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSERVICEPSEUDONYMCHANGE_H
#define IDSSERVICEPSEUDONYMCHANGE_H

@class IDSPseudonym;

#import <Foundation/Foundation.h>


@interface IDSServicePseudonymChange : NSObject

@property (readonly, nonatomic) NSUInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) IDSPseudonym *pseudonym; // ivar: _pseudonym
@property (readonly, nonatomic) NSInteger updateFlags; // ivar: _updateFlags


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPseudonymChange:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPseudonym:(id)arg0 changeType:(NSUInteger)arg1 updateFlags:(NSInteger)arg2 ;


@end


#endif