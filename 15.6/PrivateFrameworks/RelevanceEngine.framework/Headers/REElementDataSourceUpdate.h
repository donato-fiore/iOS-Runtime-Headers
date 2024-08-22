// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REELEMENTDATASOURCEUPDATE_H
#define REELEMENTDATASOURCEUPDATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "REElement.h"

@interface REElementDataSourceUpdate : NSObject

@property (readonly, nonatomic) REElement *element; // ivar: _element
@property (readonly, nonatomic) NSString *section; // ivar: _section
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)insertElement:(id)arg0 inSection:(id)arg1 ;
+(id)refreshElement:(id)arg0 inSection:(id)arg1 ;
+(id)reloadElement:(id)arg0 inSection:(id)arg1 ;
+(id)removeElement:(id)arg0 inSection:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithElement:(id)arg0 section:(id)arg1 updateType:(NSUInteger)arg2 ;


@end


#endif