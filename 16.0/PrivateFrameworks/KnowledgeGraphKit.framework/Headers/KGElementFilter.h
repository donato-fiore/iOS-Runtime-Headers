// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGELEMENTFILTER_H
#define KGELEMENTFILTER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface KGElementFilter : NSObject

@property (nonatomic) BOOL includeTombstones; // ivar: _includeTombstones
@property (readonly, nonatomic) BOOL isTrivial;
@property (readonly, nonatomic) NSArray *optionalLabels; // ivar: _optionalLabels
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSArray *requiredLabels; // ivar: _requiredLabels


+(id)any;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesElement:(id)arg0 ;
-(BOOL)matchesLabels:(id)arg0 ;
-(BOOL)matchesProperties:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithRequiredLabels:(id)arg0 optionalLabels:(id)arg1 properties:(id)arg2 ;


@end


#endif