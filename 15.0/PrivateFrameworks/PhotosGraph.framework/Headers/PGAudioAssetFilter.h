// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGAUDIOASSETFILTER_H
#define PGAUDIOASSETFILTER_H

@class NSIndexSet, NSString;
@protocol PGAssetFilter;

#import <Foundation/Foundation.h>


@interface PGAudioAssetFilter : NSObject <PGAssetFilter>



@property (readonly, nonatomic) NSIndexSet *audioClassifications; // ivar: _audioClassifications
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)name;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)passesWithAsset:(id)arg0 ;
-(id)filteredAssetsFromAssets:(id)arg0 ;
-(id)initWithAudioClassifications:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif