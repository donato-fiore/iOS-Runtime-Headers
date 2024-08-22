// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYCHRONICLE_H
#define BYCHRONICLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BYChronicle : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureEntries; // ivar: _featureEntries


-(id)dictionaryRepresentation;
-(id)entryForFeature:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)addEntry:(id)arg0 forFeature:(NSUInteger)arg1 ;
-(void)recordFeatureShown:(NSUInteger)arg0 ;


@end


#endif