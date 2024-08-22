// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKSMARTCARDATR_H
#define TKSMARTCARDATR_H

@class NSMutableArray, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface TKSmartCardATR : NSObject {
    NSMutableArray *_interfaces;
}


@property (readonly, nonatomic) NSData *bytes; // ivar: _bytes
@property (readonly, nonatomic) NSData *historicalBytes; // ivar: _historicalBytes
@property (readonly, nonatomic) NSArray *historicalRecords;
@property (readonly, nonatomic) NSArray *protocols;


-(id)_formatHexData:(id)arg0 to:(id)arg1 ;
-(id)description;
-(id)initWithBytes:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)interfaceGroupAtIndex:(NSInteger)arg0 ;
-(id)interfaceGroupForProtocol:(NSUInteger)arg0 ;
-(id)parseFromSource:(id)arg0 ;


@end


#endif