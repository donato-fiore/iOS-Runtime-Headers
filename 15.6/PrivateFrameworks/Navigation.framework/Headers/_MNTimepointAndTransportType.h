// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MNTIMEPOINTANDTRANSPORTTYPE_H
#define _MNTIMEPOINTANDTRANSPORTTYPE_H

@class NSString;
@protocol MNJSONOutput, NSSecureCoding, NSCopying;


#import "MNTimepoint.h"

@interface _MNTimepointAndTransportType : MNTimepoint <MNJSONOutput, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 date:(id)arg1 transportType:(int)arg2 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif