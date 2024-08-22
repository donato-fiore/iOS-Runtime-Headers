// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEFEATURESET_H
#define ATXMODEFEATURESET_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXModeFeatureSet : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_features;
}




+(BOOL)supportsSecureCoding;
-(BOOL)boolValueForFeatureType:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)stringForFeatureType:(int)arg0 ;
-(id)valueForFeatureType:(int)arg0 ;
-(void)_enumerateFeaturesUsingBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithFeatures:(id)arg0 ;
-(void)setNullForFeatureType:(int)arg0 ;
-(void)setString:(id)arg0 forFeatureType:(int)arg1 ;
-(void)setValue:(BOOL)arg0 forBinaryFeatureOfType:(int)arg1 ;
-(void)setValue:(id)arg0 forFeatureType:(int)arg1 ;


@end


#endif