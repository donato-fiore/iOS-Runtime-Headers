// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMAPISECTIONRESULT_H
#define NMAPISECTIONRESULT_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface NMAPISectionResult : NSObject

@property (readonly, nonatomic) NSArray *itemsArray; // ivar: _itemsArray
@property (readonly, nonatomic) NSDictionary *sectionDictionary; // ivar: _sectionDictionary
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSectionIdentifier:(id)arg0 sectionDictionary:(id)arg1 itemsArray:(id)arg2 ;


@end


#endif