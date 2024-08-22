// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUADJUSTMENT_H
#define NUADJUSTMENT_H

@class NSString, NSDictionary;
@protocol NUIdentifiable;

#import <Foundation/Foundation.h>

#import "NUIdentifier.h"
#import "NUAdjustmentSchema.h"

@interface NUAdjustment : NSObject <NUIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NUIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NUAdjustmentSchema *schema; // ivar: _schema
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAdjustment:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAdjustmentSchema:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)reset;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif