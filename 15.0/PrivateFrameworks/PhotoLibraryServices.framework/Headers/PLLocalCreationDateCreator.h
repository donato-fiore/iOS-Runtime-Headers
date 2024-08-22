// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLOCALCREATIONDATECREATOR_H
#define PLLOCALCREATIONDATECREATOR_H

@class PFTimeZoneLookup;

#import <Foundation/Foundation.h>


@interface PLLocalCreationDateCreator : NSObject

@property (readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup; // ivar: _timeZoneLookup


+(id)_gmtTranslationDictionary;
+(void)initialize;
-(id)generateInferredTimeZoneOffsetForAsset:(id)arg0 ;
-(id)initWithTimeZoneLookup:(id)arg0 ;


@end


#endif