// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITOBJECTTRANSPORTINFO_H
#define AXAUDITOBJECTTRANSPORTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXAuditObjectTransportInfo : NSObject

@property (copy, nonatomic) id *canEncodeObjectBlock; // ivar: _canEncodeObjectBlock
@property (copy, nonatomic) id *createLocalObjectBlock; // ivar: _createLocalObjectBlock
@property (copy, nonatomic) id *createTransportObjectBlock; // ivar: _createTransportObjectBlock
@property (nonatomic) BOOL requiresRawTransportDictionary; // ivar: _requiresRawTransportDictionary
@property (retain, nonatomic) NSString *transportKey; // ivar: _transportKey


-(id)initWithTransportKey:(id)arg0 ;


@end


#endif