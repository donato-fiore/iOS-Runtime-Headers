// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERELEVANCEVALUE_H
#define RERELEVANCEVALUE_H

@protocol NSCopying, REAutomaticExportedInterface;

#import <Foundation/Foundation.h>

#import "RETaggedFeatureValueArray.h"

@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic, getter=isHistoric) BOOL historic; // ivar: _historic
@property (readonly, nonatomic) RETaggedFeatureValueArray *values; // ivar: _values


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithValues:(id)arg0 isHistoric:(BOOL)arg1 ;


@end


#endif