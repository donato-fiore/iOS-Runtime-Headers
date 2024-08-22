// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWAKECONFIGURATIONPARAMETERS_H
#define HMDWAKECONFIGURATIONPARAMETERS_H

@class NSString, NSData, NSMutableArray;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>


@interface HMDWakeConfigurationParameters : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *delimiter; // ivar: _delimiter
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *primaryIdentifier; // ivar: _primaryIdentifier
@property (retain, nonatomic) NSMutableArray *secondaryIdentifier; // ivar: _secondaryIdentifier
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDelimiter:(id)arg0 primaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif