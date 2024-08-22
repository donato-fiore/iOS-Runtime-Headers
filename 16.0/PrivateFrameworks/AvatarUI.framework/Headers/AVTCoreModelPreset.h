// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCOREMODELPRESET_H
#define AVTCOREMODELPRESET_H

@class NSString, AVTPreset, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVTCoreModelPreset : NSObject

@property (readonly, nonatomic, getter=isDefaultPreset) BOOL defaultPreset; // ivar: _defaultPreset
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedPairedName;
@property (readonly, nonatomic) AVTPreset *preset; // ivar: _preset
@property (readonly, copy, nonatomic) NSDictionary *tags; // ivar: _tags


+(id)tagSetFromPreset:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyForPairedCategory:(NSInteger)arg0 ;
-(id)description;
-(id)initWithPreset:(id)arg0 ;
-(id)initWithPreset:(id)arg0 isDefaultPreset:(BOOL)arg1 ;


@end


#endif