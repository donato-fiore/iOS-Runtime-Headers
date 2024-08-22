// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIDEBUGMETRICSIMPRESSION_H
#define VUIDEBUGMETRICSIMPRESSION_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface VUIDebugMetricsImpression : NSObject

@property (readonly, nonatomic) NSString *idType; // ivar: _idType
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *impressionId;
@property (readonly, nonatomic) NSString *impressionIndex;
@property (retain, nonatomic) NSDictionary *mainValues; // ivar: _mainValues
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *orderedOtherKeys; // ivar: _orderedOtherKeys
@property (retain, nonatomic) NSDictionary *otherValues; // ivar: _otherValues
@property (readonly, nonatomic) NSString *parentId;
@property (readonly, nonatomic) NSString *type;


-(id)initWithDictionary:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif