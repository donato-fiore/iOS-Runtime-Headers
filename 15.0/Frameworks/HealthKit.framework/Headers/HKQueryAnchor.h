// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUERYANCHOR_H
#define HKQUERYANCHOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic, getter=_clientToken, setter=_setClientToken:) NSString *clientToken; // ivar: _clientToken
@property (nonatomic, getter=_rowid, setter=_setRowid:) NSInteger rowid; // ivar: _rowid


+(BOOL)supportsSecureCoding;
+(id)_anchorWithRowid:(NSInteger)arg0 ;
+(id)_anchorWithRowidValue:(NSInteger)arg0 ;
+(id)anchorFromValue:(NSUInteger)arg0 ;
+(id)latestAnchor;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif