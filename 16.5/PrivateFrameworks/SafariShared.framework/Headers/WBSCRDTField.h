// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCRDTFIELD_H
#define WBSCRDTFIELD_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WBSCRDTGeneration.h"

@interface WBSCRDTField : NSObject <NSCopying>

 {
    id *_value;
    id *_valueSource;
    id *_valueProvider;
    id *_valueUpdater;
    NSMutableDictionary *_metadata;
}


@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) WBSCRDTGeneration *generation; // ivar: _generation
@property (nonatomic) BOOL shouldIncrementGeneration; // ivar: _shouldIncrementGeneration
@property (copy, nonatomic) NSObject<NSCopying> *value;


-(NSInteger)mergeWithField:(id)arg0 ;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithValue:(id)arg0 generation:(id)arg1 deviceIdentifier:(id)arg2 ;
// -(id)initWithValue:(id)arg0 valueSource:(id)arg1 valueProvider:(id)arg2 valueUpdater:(unk)arg3 generation:(id)arg4 deviceIdentifier:(unk)arg5  ;
// -(id)initWithValueSource:(id)arg0 valueProvider:(id)arg1 valueUpdater:(unk)arg2 generation:(id)arg3 deviceIdentifier:(unk)arg4  ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)incrementGenerationIfNeeded;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif