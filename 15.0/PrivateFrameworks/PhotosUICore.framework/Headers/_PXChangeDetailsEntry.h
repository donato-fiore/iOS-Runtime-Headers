// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXCHANGEDETAILSENTRY_H
#define _PXCHANGEDETAILSENTRY_H

@class NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PXMutableArrayChangeDetails.h"

@interface _PXChangeDetailsEntry : NSObject

@property (readonly, nonatomic) PXMutableArrayChangeDetails *changeDetails; // ivar: _changeDetails
@property (nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) NSDictionary *subitemChangesByItem;
@property (readonly, nonatomic) NSMutableArray *subitemEntries; // ivar: _subitemEntries


-(id)initWithIndex:(NSInteger)arg0 changeDetails:(id)arg1 ;
-(void)addSubitemEntry:(id)arg0 ;
-(void)updateWithSectionedChangeDetails:(id)arg0 ;


@end


#endif