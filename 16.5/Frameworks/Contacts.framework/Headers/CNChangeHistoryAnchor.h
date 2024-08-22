// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYANCHOR_H
#define CNCHANGEHISTORYANCHOR_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithSequenceNumber:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif