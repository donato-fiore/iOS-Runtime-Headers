// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPERSISTEDDETECTIONTRAITMETADATA_H
#define PLPERSISTEDDETECTIONTRAITMETADATA_H

@class NSString;
@protocol NSSecureCoding, PLDetectionTraitRebuildDescription;

#import <Foundation/Foundation.h>


@interface PLPersistedDetectionTraitMetadata : NSObject <NSSecureCoding, PLDetectionTraitRebuildDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (nonatomic) short type; // ivar: _type
@property (nonatomic) short value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)_persistedDetectionTraitMetadataWithDetectionTrait:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif