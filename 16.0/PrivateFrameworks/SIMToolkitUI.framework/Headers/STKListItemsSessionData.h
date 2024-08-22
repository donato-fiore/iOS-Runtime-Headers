// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKLISTITEMSSESSIONDATA_H
#define STKLISTITEMSSESSIONDATA_H

@class NSString, NSArray;
@protocol BSXPCCoding;


#import "STKTextSessionData.h"

@interface STKListItemsSessionData : STKTextSessionData <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *listItems; // ivar: _listItems
@property (readonly) Class superclass;


-(id)initWithText:(id)arg0 simLabel:(id)arg1 listItems:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif