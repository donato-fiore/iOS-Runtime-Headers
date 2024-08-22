// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMOVIEV2MOVIETHEATER_H
#define SAMOVIEV2MOVIETHEATER_H

@class NSArray;


#import "SADomainObject.h"
#import "SALocalSearchBusiness2.h"

@interface SAMovieV2MovieTheater : SADomainObject

@property (retain, nonatomic) SALocalSearchBusiness2 *business;
@property (copy, nonatomic) NSArray *movies;


+(id)movieTheater;
+(id)movieTheaterWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif