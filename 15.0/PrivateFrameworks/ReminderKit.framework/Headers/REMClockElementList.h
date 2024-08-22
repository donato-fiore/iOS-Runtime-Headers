// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMCLOCKELEMENTLIST_H
#define REMCLOCKELEMENTLIST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface REMClockElementList : NSObject

@property (copy, nonatomic) NSArray *elements; // ivar: _elements


+(BOOL)list:(id)arg0 isCompatibleToList:(id)arg1 ;
+(NSInteger)compareList:(id)arg0 toList:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCRVectorTimestampElements:(id)arg0 ;
-(id)initWithEntryArchive:(*void)arg0 ;
-(id)initWithTTVectorTimestampElements:(id)arg0 ;
-(void)encodeIntoEntryArchive:(*void)arg0 ;


@end


#endif