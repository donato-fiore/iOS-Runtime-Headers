// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIAENTITYFETCHRESPONSE_H
#define VUIMEDIAENTITYFETCHRESPONSE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaEntityFetchResponse : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *grouping; // ivar: _grouping
@property (copy, nonatomic) NSArray *groupingSortIndexes; // ivar: _groupingSortIndexes
@property (copy, nonatomic) NSArray *mediaEntities; // ivar: _mediaEntities
@property (nonatomic) NSUInteger mediaEntitySubtype; // ivar: _mediaEntitySubtype
@property (copy, nonatomic) NSArray *sortIndexes; // ivar: _sortIndexes


-(BOOL)_updateWithResponse:(id)arg0 changes:(id)arg1 replaceContentsOnNilChanges:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif