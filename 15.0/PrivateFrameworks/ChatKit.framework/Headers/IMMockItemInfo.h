// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMOCKITEMINFO_H
#define IMMOCKITEMINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMMockItemInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL outgoing; // ivar: _outgoing
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)decodedMockItemInfoArray:(id)arg0 ;
+(id)defaultMockInfoArray;
+(id)encodedMockItemInfoArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMockItemType:(NSInteger)arg0 outgoing:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif