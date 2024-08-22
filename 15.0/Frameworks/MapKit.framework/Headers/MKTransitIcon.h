// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITICON_H
#define MKTRANSITICON_H

@class NSString, GEOStyleAttributes;
@protocol GEOTransitIconDataSource;

#import <Foundation/Foundation.h>


@interface MKTransitIcon : NSObject <GEOTransitIconDataSource>



@property (readonly, nonatomic) unsigned int cartoID; // ivar: _cartoID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int defaultTransitType; // ivar: _defaultTransitType
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int iconAttributeKey; // ivar: _iconAttributeKey
@property (readonly, nonatomic) unsigned int iconAttributeValue; // ivar: _iconAttributeValue
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (readonly) Class superclass;


-(id)initWithCartoId:(unsigned int)arg0 defaultTransitType:(unsigned int)arg1 ;
-(id)initWithKey:(unsigned int)arg0 value:(unsigned int)arg1 ;


@end


#endif