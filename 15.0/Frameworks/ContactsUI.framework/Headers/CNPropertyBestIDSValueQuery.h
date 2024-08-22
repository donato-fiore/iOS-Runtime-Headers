// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYBESTIDSVALUEQUERY_H
#define CNPROPERTYBESTIDSVALUEQUERY_H

@class NSArray, NSMutableArray;
@protocol CNPropertyBestIDSValueQueryDelegate, CNCancelable;

#import <Foundation/Foundation.h>

#import "CNPropertyGroupItem.h"

@interface CNPropertyBestIDSValueQuery : NSObject

@property (readonly, nonatomic) CNPropertyGroupItem *bestIDSProperty;
@property (weak, nonatomic) NSObject<CNPropertyBestIDSValueQueryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *idsHandles; // ivar: _idsHandles
@property (retain, nonatomic) NSObject<CNCancelable> *idsLookupToken; // ivar: _idsLookupToken
@property (retain, nonatomic) NSArray *propertyItems; // ivar: _propertyItems
@property (retain, nonatomic) NSMutableArray *validIDSHandles; // ivar: _validIDSHandles
@property (readonly, nonatomic) NSMutableArray *validIDSItems; // ivar: _validIDSItems


-(id)initWithPropertyItems:(id)arg0 service:(id)arg1 ;
-(id)initWithPropertyItems:(id)arg0 service:(id)arg1 idsAvailabilityProvider:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)cancel;


@end


#endif