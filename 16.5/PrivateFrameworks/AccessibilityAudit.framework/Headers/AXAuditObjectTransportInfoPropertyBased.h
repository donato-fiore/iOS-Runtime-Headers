// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITOBJECTTRANSPORTINFOPROPERTYBASED_H
#define AXAUDITOBJECTTRANSPORTINFOPROPERTYBASED_H

@class NSMutableArray, NSArray;


#import "AXAuditObjectTransportInfo.h"

@interface AXAuditObjectTransportInfoPropertyBased : AXAuditObjectTransportInfo

@property (retain, nonatomic) NSMutableArray *_propertyEntries; // ivar: __propertyEntries
@property (retain, nonatomic) Class entryClass; // ivar: _entryClass
@property (readonly, nonatomic) NSArray *propertyEntries;


-(id)init;
-(id)initWithClass:(Class)arg0 transportKey:(id)arg1 ;
-(void)_initializeBlocks;
-(void)addPropertyEntry:(id)arg0 ;


@end


#endif