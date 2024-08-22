// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIADJUSTMENTCONTROLLER_H
#define PIADJUSTMENTCONTROLLER_H

@class NSMutableDictionary, NUAdjustment, NSArray, NSString, NUIdentifier, NSDictionary;

#import <Foundation/Foundation.h>


@interface PIAdjustmentController : NSObject {
    NSMutableDictionary *_changes;
}


@property (readonly, nonatomic) NUAdjustment *adjustment; // ivar: _adjustment
@property (readonly, nonatomic) BOOL canBeEnabled;
@property (readonly, nonatomic) NSArray *displayInputKeys;
@property (readonly, nonatomic) NSString *displayName;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NUIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *inputKeys;
@property (readonly, nonatomic) NSDictionary *settings;


+(id)autoKey;
-(BOOL)_isDefault;
-(BOOL)canHaveAuto;
-(BOOL)hasAutoKeyInSchema;
-(BOOL)hasInputKey:(id)arg0 ;
-(BOOL)isAuto;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 forKeys:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 visualChangesOnly:(BOOL)arg1 ;
-(BOOL)isEqualToAdjustmentController:(id)arg0 ;
-(BOOL)isSettingEqual:(id)arg0 forKey:(id)arg1 ;
-(NSUInteger)hash;
-(id)_primitiveValueForKey:(id)arg0 ;
-(id)autoKeysForPaste;
-(id)debugDescription;
-(id)initWithAdjustment:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;
-(id)settingForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)valuesForArrayInputKey:(id)arg0 ;
-(id)visualInputKeys;
-(struct ? )timeFromInputKey:(id)arg0 timescaleKey:(id)arg1 ;
-(void)_setPrimitiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)interpolateFromStart:(id)arg0 toEnd:(id)arg1 progress:(CGFloat)arg2 ;
-(void)pasteAdjustment:(id)arg0 forMediaType:(NSInteger)arg1 ;
-(void)setFromAdjustment:(id)arg0 ;
-(void)setIsAuto:(BOOL)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif