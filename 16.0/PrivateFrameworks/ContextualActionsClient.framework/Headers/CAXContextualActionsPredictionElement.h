// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAXCONTEXTUALACTIONSPREDICTIONELEMENT_H
#define CAXCONTEXTUALACTIONSPREDICTIONELEMENT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CAXContextualActionsPredictionElement : NSObject

@property (retain, nonatomic) NSString *encodedActionIdentifier; // ivar: _encodedActionIdentifier
@property (retain, nonatomic) NSNumber *frequency; // ivar: _frequency
@property (retain, nonatomic) NSNumber *normalizedFrequency; // ivar: _normalizedFrequency
@property (retain, nonatomic) NSNumber *priorTotal; // ivar: _priorTotal


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 frequency:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 frequency:(id)arg1 normalizedFrequency:(id)arg2 priorTotal:(id)arg3 ;


@end


#endif