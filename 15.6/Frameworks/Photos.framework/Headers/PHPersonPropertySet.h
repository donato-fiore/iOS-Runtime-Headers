// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPERSONPROPERTYSET_H
#define PHPERSONPROPERTYSET_H

@class NSString;
@protocol PHPersonPropertySet;

#import <Foundation/Foundation.h>

#import "PHPerson.h"

@interface PHPersonPropertySet : NSObject <PHPersonPropertySet>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHPerson *person; // ivar: _person
@property (readonly) Class superclass;


+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertiesToPrefetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 person:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif