// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEINMEMORYMODELDESCRIPTOR_H
#define _ANEINMEMORYMODELDESCRIPTOR_H

@class NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _ANEInMemoryModelDescriptor : NSObject

@property (readonly, nonatomic) BOOL isMILModel; // ivar: _isMILModel
@property (readonly, copy, nonatomic) NSData *networkText; // ivar: _networkText
@property (readonly, copy, nonatomic) NSString *networkTextHash; // ivar: _networkTextHash
@property (readonly, nonatomic) NSData *optionsPlist; // ivar: _optionsPlist
@property (readonly, nonatomic) NSString *optionsPlistHash; // ivar: _optionsPlistHash
@property (readonly, nonatomic) NSDictionary *weights; // ivar: _weights
@property (readonly, copy, nonatomic) NSString *weightsHash; // ivar: _weightsHash


+(id)modelWithMILText:(id)arg0 weights:(id)arg1 optionsPlist:(id)arg2 ;
+(id)modelWithNetworkDescription:(id)arg0 weights:(id)arg1 optionsPlist:(id)arg2 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInMemoryModelDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)hexStringIdentifier;
-(id)init;
-(id)initWithNetworkText:(id)arg0 weights:(id)arg1 optionsPlist:(id)arg2 isMILModel:(BOOL)arg3 ;


@end


#endif