// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATOMBATCHENUMERATIONOPTIONS_H
#define CKATOMBATCHENUMERATIONOPTIONS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CKAtomBatchEnumerationOptions : NSObject

@property (nonatomic) NSNumber *atomType; // ivar: _atomType
@property (copy, nonatomic) NSData *siteIdentifierModifier; // ivar: _siteIdentifierModifier


+(id)optionsWithAtomType:(NSUInteger)arg0 ;
+(id)optionsWithSiteIdentifierModifier:(id)arg0 ;


@end


#endif