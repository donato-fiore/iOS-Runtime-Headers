// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAIRDROPTRANSFERITEM_H
#define SFAIRDROPTRANSFERITEM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAirDropTransferItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) BOOL isFile; // ivar: _isFile
@property (readonly, copy, nonatomic) NSString *subtype; // ivar: _subtype
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 isFile:(BOOL)arg1 ;
-(id)initWithType:(id)arg0 subtype:(id)arg1 isFile:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementCount;


@end


#endif