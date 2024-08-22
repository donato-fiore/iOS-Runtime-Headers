// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFILTERGROUP_H
#define PXFILTERGROUP_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXFilterGroup : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *filterIdentifiers; // ivar: _filterIdentifiers
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)groupWithName:(id)arg0 filterIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 filterIdentifiers:(id)arg1 ;


@end


#endif