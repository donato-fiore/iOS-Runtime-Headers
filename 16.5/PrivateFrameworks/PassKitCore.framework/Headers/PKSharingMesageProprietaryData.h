// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGMESAGEPROPRIETARYDATA_H
#define PKSHARINGMESAGEPROPRIETARYDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKSharingMesageProprietaryData : NSObject

@property (nonatomic) NSInteger accessType; // ivar: _accessType
@property (retain, nonatomic) NSArray *displayableSharedEntitlements; // ivar: _displayableSharedEntitlements


-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif