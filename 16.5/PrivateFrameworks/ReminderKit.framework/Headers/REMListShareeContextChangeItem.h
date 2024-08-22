// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTSHAREECONTEXTCHANGEITEM_H
#define REMLISTSHAREECONTEXTCHANGEITEM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REMListChangeItem.h"

@interface REMListShareeContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem; // ivar: _listChangeItem
@property (readonly, nonatomic) NSArray *sharees;


-(id)addShareeWithDisplayName:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 address:(id)arg3 status:(NSInteger)arg4 accessLevel:(NSInteger)arg5 ;
-(id)addShareeWithDisplayName:(id)arg0 firstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 namePrefix:(id)arg4 nameSuffix:(id)arg5 nickname:(id)arg6 address:(id)arg7 status:(NSInteger)arg8 accessLevel:(NSInteger)arg9 ;
-(id)addShareeWithPersonNameComponents:(id)arg0 address:(id)arg1 status:(NSInteger)arg2 accessLevel:(NSInteger)arg3 ;
-(id)initWithListChangeItem:(id)arg0 ;
-(void)addSharee:(id)arg0 ;
-(void)removeAllSharees;
-(void)removeSharee:(id)arg0 ;


@end


#endif