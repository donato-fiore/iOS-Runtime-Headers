// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCELLULARNETWORKITEM_H
#define TPSCELLULARNETWORKITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TPSCellularNetworkItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCellularNetworkItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 localizedName:(id)arg2 ;


@end


#endif